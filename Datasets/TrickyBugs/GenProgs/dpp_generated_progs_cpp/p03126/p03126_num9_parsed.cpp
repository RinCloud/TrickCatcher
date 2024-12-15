#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> foods(N, vector<int>(M+1, 0));
    
    for (int i = 0; i < N; i++) {
        int K;
        cin >> K;
        for (int j = 0; j < K; j++) {
            int food;
            cin >> food;
            foods[i][food]++;
        }
    }
    
    int count = 0;
    for (int i = 1; i <= M; i++) {
        bool likedByAll = true;
        for (int j = 0; j < N; j++) {
            if (foods[j][i] == 0) {
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