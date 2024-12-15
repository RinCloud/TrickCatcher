#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> tickets(M);
    for (int i = 0; i < M; i++) {
        cin >> tickets[i];
    }

    sort(tickets.begin(), tickets.end(), greater<int>());

    long long total_cost = 0;
    for (int i = 0; i < N; i++) {
        int x = A[i];
        for (int j = 0; j < M; j++) {
            if (tickets[j] == 0) {
                break;
            }
            x = max(x, x / 2);
            tickets[j]--;
        }
        total_cost += x;
    }

    cout << total_cost << endl;

    return 0;
}