#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> L(N), R(N);
    for (int i = 0; i < N; i++) {
        cin >> L[i] >> R[i];
    }
    
    vector<int> chairs(M + 1, 0);
    for (int i = 0; i < N; i++) {
        chairs[L[i]]++;
        chairs[R[i] + 1]--;
    }
    
    int minAdditionalChairs = 0;
    for (int i = 1; i <= M; i++) {
        chairs[i] += chairs[i - 1];
        if (chairs[i] == 0) {
            minAdditionalChairs++;
        }
    }
    
    cout << minAdditionalChairs << endl;
    
    return 0;
}