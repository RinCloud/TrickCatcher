#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, L, T;
    cin >> N >> L >> T;
    
    vector<pair<int, int>> ants(N);
    for (int i = 0; i < N; i++) {
        cin >> ants[i].first >> ants[i].second;
    }
    
    vector<int> positions(N);
    for (int i = 0; i < N; i++) {
        positions[i] = ants[i].first + (ants[i].second == 1 ? T : -T);
        positions[i] = (positions[i] % L + L) % L;
    }
    
    for (int i = 0; i < N; i++) {
        cout << positions[i] << endl;
    }
    
    return 0;
}