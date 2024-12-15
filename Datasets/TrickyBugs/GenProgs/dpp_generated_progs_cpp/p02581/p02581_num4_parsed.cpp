#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(3*N);
    for (int i = 0; i < 3*N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    
    int sum = 0;
    for (int i = N; i < 3*N; i += 2) {
        sum += A[i];
    }

    cout << sum << endl;

    return 0;
}