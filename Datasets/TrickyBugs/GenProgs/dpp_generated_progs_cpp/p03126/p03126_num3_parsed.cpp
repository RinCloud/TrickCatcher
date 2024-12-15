#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<unordered_map<int, int>> foodMap(N);
    for (int i = 0; i < N; i++) {
        int K;
        cin >> K;
        for (int j = 0; j < K; j++) {
            int food;
            cin >> food;
            foodMap[i][food]++;
        }
    }

    int count = 0;
    for (int food = 1; food <= M; food++) {
        bool likedByAll = true;
        for (int i = 0; i < N; i++) {
            if (foodMap[i].count(food) == 0) {
                likedByAll = false;
                break;
            }
        }
        if (likedByAll) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}