#include "MineMapMask.h"

int MIneMapMAsk[MAX_ROW][MAX_COL];
int MineMapLabel[MAX_ROW][MAX_COL];
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            MineMapLabel[i][j] = 0;
}

void placeMines(int row, int col, int mineCount)
{
    int count = 0;

    while (count < mineCount)
    {
        int r = rand() % row;
        int c = rand() % col;

        if (MineMapLabel[r][c] != -1)
        {
            MineMapLabel[r][c] = -1;
            count++;
        }
    }
}

int main()
{
    int row, col, mineCount;

    srand((unsisgned)time(0));

    cout << "맵 세로: ";
    cin >> row;
    cout << "맵 가로: ";
    cin >> col;

    cout << "지뢰 갯수: ";
    cin >> mineCount;

    initMap(row, col);
    placeMines(row, col, mineCount);

    cout << "지뢰 배치 완료" << endl;

    return 0;
}
