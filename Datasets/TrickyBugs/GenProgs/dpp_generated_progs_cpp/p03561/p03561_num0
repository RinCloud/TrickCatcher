#include <iostream>
#include <vector>
using namespace std;

int main() {
    int K, N;
    cin >> K >> N;

    // Calculate the total number of sequences, X
    long long X = 0;
    for (int i = 1; i <= N; i++) {
        X += min(K, i);
    }

    // Calculate the lexicographically smallest sequence
    vector<int> sequence(N);
    int num = 1;
    int index = 0;
    while (num <= X / 2) {
        sequence[index]++;
        if (sequence[index] > K) {
            sequence[index] = 1;
            index++;
        } else {
            num++;
            index = 0;
        }
    }

    // Print the sequence
    for (int i = 0; i < N; i++) {
        cout << sequence[i] << " ";
    }
    cout << endl;
    
    return 0;
}