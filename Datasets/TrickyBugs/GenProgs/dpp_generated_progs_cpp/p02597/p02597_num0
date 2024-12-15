#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    string stones;
    cin >> stones;

    int left_w = 0;  // number of white stones on the left of a red stone
    int ops = 0;    // number of operations needed

    for (int i = 0; i < N; i++) {
        if (stones[i] == 'W') {
            left_w++;
        } else {
            if (left_w > 0) {
                left_w--;
                ops++;
            }
        }
    }

    cout << ops << endl;

    return 0;
}