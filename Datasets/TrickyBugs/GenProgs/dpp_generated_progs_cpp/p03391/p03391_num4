#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> A(N);
    vector<long long> B(N);

    long long A_sum = 0;
    long long B_sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
        A_sum += A[i];
        B_sum += B[i];
    }

    if (A_sum != B_sum) {
        cout << "Error: The sums of the elements in A and B should be equal." << endl;
        return 0;
    }

    vector<long long> diff(N);
    for (int i = 0; i < N; i++) {
        diff[i] = A[i] - B[i];
    }

    sort(diff.begin(), diff.end());

    long long candies = 0;
    int idx = 0;

    while (diff[idx] <= 0 && idx < N) {
        candies -= diff[idx++];
    }

    cout << candies << endl;

    return 0;
}