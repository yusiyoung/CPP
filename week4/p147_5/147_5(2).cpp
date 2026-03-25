#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int people, n, bulletCount;

    srand((unsigned)time(0));

    cout << "참가 인원 수: ";
    cin >> people;

    cout << "약실 수(n): ";
    cin >> n;

    cout << "총알 수: ";
    cin >> bulletCount;

    int chamber[100] = {0};

    // 총알 넣기
    for (int i = 0; i < bulletCount; i++) {
        while (true) {
            int pos = rand() % n;
            if (chamber[pos] == 0) {
                chamber[pos] = 1;
                break;
            }
        }
    }

    // 사람 생존 여부
    bool alive[100];
    for (int i = 0; i < people; i++) {
        alive[i] = true;
    }

    int current = 0;
    int turn = 0;
    int fired = 0;

    cout << "===== 게임 시작 =====" << endl;

    while (fired < bulletCount) {

        // 살아있는 사람 찾기
        while (!alive[turn % people]) {
            turn++;
        }

        int person = turn % people;

        cout << person + 1 << "번 사람 -> ";

        if (chamber[current] == 1) {
            cout << "탕 맞았습니다." << endl;
            alive[person] = false; // 탈락
            chamber[current] = 0;
            fired++;
        } else {
            cout << "살았습니다." << endl;
        }

        current = (current + 1) % n;
        turn++;
    }

    cout << "===== 게임 종료 =====" << endl;

    return 0;
}