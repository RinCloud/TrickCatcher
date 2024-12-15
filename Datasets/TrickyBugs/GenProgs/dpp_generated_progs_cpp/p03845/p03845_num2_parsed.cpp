#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> T(N);
    for (int i = 0; i < N; i++) {
        cin >> T[i];
    }
    
    int M;
    cin >> M;
    vector<pair<int, int>> drinks(M);
    for (int i = 0; i < M; i++) {
        cin >> drinks[i].first >> drinks[i].second;
    }
    
    for (int i = 0; i < M; i++) {
        int total_time = 0;
        for (int j = 0; j < N; j++) {
            if (drinks[i].first == (j+1)) {
                total_time += drinks[i].second;
            }
            else {
                total_time += T[j];
            }
        }
        cout << total_time << endl;
    }
    
    return 0;
}