#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int count = 1;
    int subarrayCount = 1;

    for (int i = 1; i < N; i++) {
        if (A[i] > A[i - 1]) {
            count++;
        } else if (A[i] < A[i - 1]) {
            count--;
        }

        if (count == 0) {
            subarrayCount++;
            count = 1;
        }
    }

    cout << subarrayCount << endl;

    return 0;
}