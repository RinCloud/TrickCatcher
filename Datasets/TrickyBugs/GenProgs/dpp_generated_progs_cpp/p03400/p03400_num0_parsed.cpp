#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, D, X;
    cin >> N >> D >> X;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int chocolates = X;
    for (int i = 0; i < N; i++) {
        int days = 1;
        while (days <= D) {
            chocolates++;
            days += A[i] + 1;
        }
    }

    cout << chocolates << endl;

    return 0;
}