#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int ans = 0;
    for (int i = 0; i < N; i++) {
        int price = A[i];

        for (int j = 0; j < M && price > 0; j++) {
            price /= 2;
        }

        ans += price;
    }

    cout << ans << endl;

    return 0;
}