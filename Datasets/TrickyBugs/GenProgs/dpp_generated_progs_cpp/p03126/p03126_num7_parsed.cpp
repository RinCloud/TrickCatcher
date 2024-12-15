#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> foods(N, vector<int>(M));

    for (int i = 0; i < N; i++) {
        int K;
        cin >> K;
        for (int j = 0; j < K; j++) {
            int food;
            cin >> food;
            foods[i][food - 1] = 1;
        }
    }

    int count = 0;
    for (int j = 0; j < M; j++) {
        bool allLikes = true;
        for (int i = 0; i < N; i++) {
            if (foods[i][j] == 0) {
                allLikes = false;
                break;
            }
        }
        if (allLikes) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}