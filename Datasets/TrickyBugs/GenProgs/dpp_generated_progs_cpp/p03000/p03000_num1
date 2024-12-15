#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    
    vector<int> L(N);
    for (int i = 0; i < N; i++) {
        cin >> L[i];
    }
    
    int bounceCount = 1; // The ball will always make the first bounce at coordinate 0
    
    int currentCoordinate = 0;
    for (int i = 0; i < N; i++) {
        currentCoordinate += L[i];
        if (currentCoordinate <= X) {
            bounceCount++;
        }
    }
    
    cout << bounceCount << endl;
    
    return 0;
}