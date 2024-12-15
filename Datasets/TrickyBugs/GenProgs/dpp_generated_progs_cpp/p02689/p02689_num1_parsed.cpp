#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> observatories(N);
    for (int i = 0; i < N; i++) {
        cin >> observatories[i];
    }
    
    vector<vector<int>> roads(M, vector<int>(2));
    for (int i = 0; i < M; i++) {
        cin >> roads[i][0] >> roads[i][1];
    }
    
    vector<bool> goodObservatories(N, true);
    
    for (int i = 0; i < M; i++) {
        int a = roads[i][0] - 1;
        int b = roads[i][1] - 1;
        
        if (observatories[a] <= observatories[b]) {
            goodObservatories[a] = false;
        }
        if (observatories[b] <= observatories[a]) {
            goodObservatories[b] = false;
        }
    }
    
    int count = 0;
    for (bool isGood : goodObservatories) {
        if (isGood) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}