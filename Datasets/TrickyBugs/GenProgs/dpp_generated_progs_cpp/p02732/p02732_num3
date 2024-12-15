#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    map<int, int> count;
    for (int i = 0; i < N; i++) {
        count[A[i]]++;
    }

    for (int i = 0; i < N; i++) {
        cout << N - 1 - count[A[i]] + 1 << endl;
    }

    return 0;
}