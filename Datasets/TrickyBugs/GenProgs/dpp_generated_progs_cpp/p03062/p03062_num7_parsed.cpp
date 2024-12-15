#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    long long result = 0;

    int countNegatives = 0;
    int minValue = INT_MAX;

    for (int i = 0; i < N; i++) {
        result += abs(A[i]);
        if (A[i] < 0) {
            countNegatives++;
        }
        minValue = min(minValue, abs(A[i]));
    }

    if (countNegatives % 2 == 0) {
        cout << result << endl;
    } else {
        cout << result - 2 * minValue << endl;
    }

    return 0;
}