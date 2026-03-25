#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int people;
    int n;

    srand((unsigned)time(0));

    cout << "참가 인원 수: ";
    cin >> people;

    cout << "약실 수(n): ";
    cin >> n;

    int chamber[100] = {0};

    // 총알 1발 넣기
    int bulletPos = rand() % n;
    chamber[bulletPos] = 1;

    int current = 0;
    int person = 1;

    cout << "===== 게임 시작 =====" << endl;

    while (true) {
        cout << person << "번 사람 -> ";

        if (chamber[current] == 1) {
            cout << "탕 맞았습니다." << endl;
            break;
        } else {
            cout << "살았습니다." << endl;
        }

        current = (current + 1) % n;

        person++;
        if (person > people) {
            person = 1;
        }
    }

    cout << "===== 게임 종료 =====" << endl;

    return 0;
}