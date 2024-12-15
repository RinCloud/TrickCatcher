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

    int count = X;
    for (int i = 0; i < N; i++) {
        int day = 1;
        while (day <= D) {
            count++;
            day += A[i] + 1;
        }
    }

    cout << count << endl;

    return 0;
}