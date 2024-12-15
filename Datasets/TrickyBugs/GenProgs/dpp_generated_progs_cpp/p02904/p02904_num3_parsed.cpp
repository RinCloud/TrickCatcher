#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> P(N);
    for (int i = 0; i < N; i++)
        cin >> P[i];

    vector<int> sortedP = P;
    sort(sortedP.begin(), sortedP.end());

    int count = 0;
    for (int i = 0; i <= N - K; i++) {
        vector<int> subP(P.begin() + i, P.begin() + i + K);
        sort(subP.begin(), subP.end());
        if (subP == sortedP)
            count++;
    }

    cout << count << endl;

    return 0;
}