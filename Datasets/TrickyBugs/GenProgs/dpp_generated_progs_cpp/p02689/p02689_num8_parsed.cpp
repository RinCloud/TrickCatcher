#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }
    
    vector<int> maxElevation(N, 0);
    
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        A--;
        B--;
        
        maxElevation[A] = max(maxElevation[A], H[B]);
        maxElevation[B] = max(maxElevation[B], H[A]);
    }
    
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (H[i] >= maxElevation[i]) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
