#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<unordered_set<int>> foods(N);
    for (int i = 0; i < N; i++) {
        int K;
        cin >> K;
        for (int j = 0; j < K; j++) {
            int food;
            cin >> food;
            foods[i].insert(food);
        }
    }
    
    int count = 0;
    for (int food = 1; food <= M; food++) {
        bool likedByAll = true;
        for (int i = 0; i < N; i++) {
            if (foods[i].find(food) == foods[i].end()) {
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