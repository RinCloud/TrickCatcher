#include <iostream>
#include <vector>
using namespace std;

vector<int> generateSequence(int K, int N) {
    vector<int> sequence(N, 1);
    int idx = N - 1;
    
    while (K > 1 && idx >= 0) {
        int num = min(K - sequence[idx], sequence[idx]);
        sequence[idx] += num;
        K -= num;
        idx--;
    }
    
    return sequence;
}

int main() {
    int K, N;
    cin >> K >> N;
    
    int X = 1;
    for (int i = 0; i < N; i++) {
        X *= K;
    }
    
    vector<int> sequence = generateSequence(K, N);
    
    int target = X / 2 + (X % 2 != 0 ? 1 : 0);
    
    for (int i = 1; i <= target; i++) {
        next_permutation(sequence.begin(), sequence.end());
    }
    
    for (int i = 0; i < N; i++) {
        cout << sequence[i] << " ";
    }
    
    return 0;
}