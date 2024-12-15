#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, P;
    cin >> N >> P;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int total = 1 << N;
    int count = 0;
    for (int i = 0; i < total; i++) {
        int sum = 0;
        for (int j = 0; j < N; j++) {
            if ((i & (1 << j)) != 0) {
                sum += A[j];
            }
        }
        if (sum % 2 == P) {
            count++;
        }
    }
    
    cout << count << endl;

    return 0;
}