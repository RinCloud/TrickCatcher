#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    long long int numCandies = 0;

    for (int i = 0; i < N; i++) {
        numCandies += min(A[i], B[i]);
    }

    cout << numCandies << endl;

    return 0;
}