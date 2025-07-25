#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    int D, X;
    cin >> D >> X;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        int day = 1;
        while (day <= D) {
            day += A[i] + 1;
            count++;
        }
    }

    int result = count + X;
    cout << result << endl;

    return 0;
}