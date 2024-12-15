#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    
    vector<int> health(N);
    for (int i = 0; i < N; i++) {
        cin >> health[i];
    }
    
    long long explosions = 0;
    
    for (int i = 0; i < N; i++) {
        int remaining = health[i] - B * (A - 1);
        
        if (remaining > 0) {
            explosions += (remaining + A - 2) / (A - 1);
        }
    }
    
    cout << explosions << endl;
    
    return 0;
}