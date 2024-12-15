#include <iostream>
#include <vector>
using namespace std;

int countSemiCommonMultiples(vector<int> A, int M) {
    int count = 0;
    for (int i = 1; i <= M; i++) {
        bool isSCM = true;
        for (int j = 0; j < A.size(); j++) {
            int p = (2 * i) / A[j];
            if ((2 * i) % A[j] != 0 || p % 2 != 0) {
                isSCM = false;
                break;
            }
        }
        if (isSCM) {
            count++;
        }
    }
    return count;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int result = countSemiCommonMultiples(A, M);
    cout << result << endl;
    return 0;
}