#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N + 1, 0);
    vector<int> cost(N + 1, 0);

    for (int i = 1; i <= N; i++) {
        A[i] = i;
        cost[i] = 1;
    }

    while (M--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        int a = A[X];
        int b = A[Y];

        if (cost[a] < cost[b]) {
            swap(a, b);
        }

        for (int i = 1; i <= N; i++) {
            if (A[i] == a) {
                A[i] = b;
                cost[b]++;
                cost[a]--;
            }
        }
    }

    int totalCost = accumulate(cost.begin(), cost.end(), 0);

    cout << totalCost << endl;

    return 0;
}
