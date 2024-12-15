#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    
    vector<int> m(N);
    for (int i = 0; i < N; i++) {
        cin >> m[i];
    }
    
    int totalDoughnuts = 0;
    int minDoughnuts = X / m[0];
    for (int i = 1; i < N; i++) {
        if (m[i] < m[0]) {
            totalDoughnuts++;
            minDoughnuts--;
        }
    }
    
    totalDoughnuts += minDoughnuts;
    cout << totalDoughnuts << endl;
    
    return 0;
}