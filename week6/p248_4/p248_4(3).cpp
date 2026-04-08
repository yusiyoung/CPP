#include "MineMapMask.h"

int MineMapLabel[MAX_ROW][MAX_COL];

void initMap(int row, int col)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            MineMapLabel[i][j] = 0;
}

void placeMines(int row, int col, int mineCount)
{
    int cnt = 0;
    while (cnt < mineCount)
    {
        int r = rand() % row;
        int c = rand() % col;
        if (MineMapLabel[r][c] != -1)
        {
            MineMapLabel[r][c] = -1;
            cnt++;
        }
    }
}

void makeLabels(int row, int col)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
        {
            if (MineMapLabel[i][j] == -1) continue;

            int cnt = 0;
            for (int r = i-1; r <= i+1; r++)
                for (int c = j-1; c <= j+1; c++)
                    if (r>=0 && r<row && c>=0 && c<col)
                        if (MineMapLabel[r][c] == -1) cnt++;

            MineMapLabel[i][j] = cnt;
        }
}

void printMap(int row, int col)
{
    cout << "   ";
    for (int j = 0; j < col; j++) cout << j % 10 << " ";
    cout << endl;

    for (int i = 0; i < row; i++)
    {
        cout << i % 10 << "  ";
        for (int j = 0; j < col; j++)
            cout << (MineMapLabel[i][j] == -1 ? '*' : MineMapLabel[i][j]) << " ";
        cout << endl;
    }
}

int main()
{
    int row, col, mineCount;
    srand((unsigned)time(0));

    cin >> row >> col >> mineCount;

    initMap(row, col);
    placeMines(row, col, mineCount);
    makeLabels(row, col);
    printMap(row, col);

    return 0;
}