#include <iostream>
#include <vector>

using namespace std;

vector<int> findSequence(int K, int N) {
    vector<int> sequence(N, K);
    int totalSequences = 1;
    
    for (int i = 0; i < N; i++) {
        totalSequences *= K;
        if (totalSequences >= (totalSequences+1)/2) {
            break;
        }
    }
    
    int targetIndex = (totalSequences+1)/2;
    
    for (int i = N-1; i >= 0; i--) {
        if (targetIndex <= K) {
            sequence[i] = targetIndex;
            break;
        } else {
            sequence[i] = K;
            targetIndex -= K;
        }
    }
    
    return sequence;
}

int main() {
    int K, N;
    cin >> K >> N;
    
    vector<int> sequence = findSequence(K, N);
    
    for (int i = 0; i < N; i++) {
        cout << sequence[i] << " ";
    }
    
    return 0;
}