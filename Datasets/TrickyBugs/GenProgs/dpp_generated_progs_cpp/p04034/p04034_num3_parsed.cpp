#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> numBalls(N, 1);
    vector<bool> containsRed(N, false);
    containsRed[0] = true;

    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        x--; 
        y--;

        if (containsRed[x]) {
            containsRed[y] = true;
        }

        numBalls[x]--;
        numBalls[y]++;

        if (numBalls[x] == 0) {
            containsRed[x] = false;
        }
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (containsRed[i]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}