#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    map<pair<int, int>, char> desires;
    vector<vector<int>> counts(K, vector<int>(K, 0));
    
    for (int i = 0; i < N; i++) {
        int x, y;
        char c;
        cin >> x >> y >> c;
        desires[{x%K, y%K}] = c;
        counts[x%K][y%K]++;
    }
    
    int maxDesires = 0;
    for (int i = 0; i < K; i++) {
        for (int j = 0; j < K; j++) {
            maxDesires = max(maxDesires, counts[i][j]);
            maxDesires = max(maxDesires, N - counts[i][j]);
        }
    }
    
    cout << maxDesires << endl;
    
    return 0;
}