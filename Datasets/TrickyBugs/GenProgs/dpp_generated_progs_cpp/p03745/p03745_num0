#include <iostream>
#include <vector>
using namespace std;

int minSubarrays(int N, vector<int>& A) {
    int count = 1;
    for (int i = 1; i < N; i++) {
        if (A[i] < A[i - 1] || A[i] > A[i - 1]) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int result = minSubarrays(N, A);
    cout << result << endl;
    return 0;
}