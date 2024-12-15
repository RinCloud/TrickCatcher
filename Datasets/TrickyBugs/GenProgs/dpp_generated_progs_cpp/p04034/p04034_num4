#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> count(N, 1);
    vector<bool> red(N, false);
    red[0] = true;

    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;

        count[x - 1]--;
        count[y - 1]++;

        if (red[x - 1]) {
            red[y - 1] = true;
        }

        if (count[x - 1] == 0) {
            red[x - 1] = false;
        }
    }

    int result = 0;
    for (bool color : red) {
        if (color) {
            result++;
        }
    }

    cout << result << endl;

    return 0;
}