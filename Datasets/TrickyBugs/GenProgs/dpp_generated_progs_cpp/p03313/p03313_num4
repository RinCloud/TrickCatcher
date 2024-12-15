#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    int num_elements = 1 << N;
    vector<int> A(num_elements);
    for (int i = 0; i < num_elements; i++) {
        cin >> A[i];
    }

    vector<int> ans(num_elements - 1);
    for (int K = 1; K < num_elements; K++) {
        int max_sum = 0;
        for (int i = 0; i <= K; i++) {
            for (int j = i + 1; j <= K; j++) {
                max_sum = max(max_sum, A[i] + A[j]);
            }
        }
        ans[K - 1] = max_sum;
    }

    for (int i = 0; i < num_elements - 1; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}