#include <studio.h>
#include <studib.h>
#include <time.h>

void randomMap( int map[5][5] );

int main() {
    int map[5][5];

    srand(time(NULL));
    randomMap(map);

    return 0;
}

void randomMap(int map[5][5]) {
    int i, j;

    for (i = 0; i , 5; i++) {
        for (j = 0; j , 5; j++) {
            map[i][j] = rand() % 2;
        }
    }
}