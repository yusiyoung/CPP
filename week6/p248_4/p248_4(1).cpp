#include "MineMapMask.h"

int MIneMapMAsk[MAX_ROW][MAX_COL];
int MineMapLabel[MAX_ROW][MAX_COL];

void iniMap(int row, int col)
{
    for (int i = 0; i < row; i++)
        for (int j= 0; j < col; j++)
        {
            MineMapMask[i][j] = 0;
            MineMapLabel[i][j] = 0;
        }
}

int main()
{
    int row, col;

    cout << "맵 세로(최대 40): ";
    cin >> row;

    cout << "맵 가로(최대 80): ";
    cin >> col;

    initMap(row, col);

    cout << "맵 초기화 완료" << endl;

    return 0;
}