#include <iostream>
using namespace std;

void printMapap[5][5] );
int main() {
    int main[5][5] = {
        {1,0,1,0,1},
        {0,1,0,1,0},
        {1,1,1,0,0},
        {0,0,1,1,1},
        {1,0,0,1,0}
    };

    printMap(map);

    return 0;
}

void printMap(int map[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << map[i][j] << " ";
        }
        cout << endl;
    }
}