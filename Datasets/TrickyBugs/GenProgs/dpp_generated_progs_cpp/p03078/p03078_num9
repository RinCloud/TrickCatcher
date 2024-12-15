#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read input
    int X, Y, Z, K;
    cin >> X >> Y >> Z >> K;

    vector<long long> A(X), B(Y), C(Z);
    for (int i = 0; i < X; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < Y; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < Z; i++) {
        cin >> C[i];
    }

    // Calculate the sum of deliciousness for each combination of cakes
    vector<long long> sum;
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                sum.push_back(A[i] + B[j] + C[k]);
            }
        }
    }

    // Sort the sums in descending order
    sort(sum.rbegin(), sum.rend());

    // Print the first K sums
    for (int i = 0; i < K; i++) {
        cout << sum[i] << endl;
    }

    return 0;
}