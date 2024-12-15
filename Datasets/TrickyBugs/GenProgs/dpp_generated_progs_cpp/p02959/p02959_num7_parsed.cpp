#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N+1);
    for (int i=0; i<=N; i++) {
        cin >> A[i];
    }

    vector<int> B(N);
    for (int i=0; i<N; i++) {
        cin >> B[i];
    }

    long long int total = 0;
    for (int i=0; i<N; i++) {
        int monsters_defeated = min(A[i], B[i]);
        total += monsters_defeated;
        A[i] -= monsters_defeated;
        monsters_defeated = min(A[i+1], B[i]);
        total += monsters_defeated;
        A[i+1] -= monsters_defeated;
    }

    cout << total << endl;

    return 0;
}