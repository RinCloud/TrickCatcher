#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool canCut(int log, int totalCuts, int maxLogLength) {
    int cuts = 0;
    while (log > 0 && cuts < totalCuts) {
        if (log <= maxLogLength) {
            return true;
        }
        int middle = log / 2;
        cuts++;
        if (log - middle > middle) {
            log -= middle;
        } else {
            log = middle;
        }
    }
    return cuts < totalCuts;
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int left = 1, right = *max_element(A.begin(), A.end());
    int answer = right;
    while (left <= right) {
        int middle = (left + right) / 2;
        int totalCuts = 0;
        for (int i = 0; i < N; i++) {
            totalCuts += ceil(static_cast<double>(A[i]) / middle) - 1;
        }
        if (canCut(answer, K - totalCuts, middle)) {
            answer = middle;
            right = middle - 1;
        } else {
            left = middle + 1;
        }
    }
    cout << answer << endl;
    return 0;
}