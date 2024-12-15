#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int countSemiCommonMultiples(int N, int M, vector<int>& A) {
    int count = 0;
    for (int x = 1; x <= M; x++) {
        bool isSemiCommon = true;
        for (int k = 0; k < N; k++) {
            double p = (x / (double)A[k]) - 0.5;
            if (p < 0 || floor(p) != p) {
                isSemiCommon = false;
                break;
            }
        }
        if (isSemiCommon) {
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
    int result = countSemiCommonMultiples(N, M, A);
    cout << result << endl;
    return 0;
}