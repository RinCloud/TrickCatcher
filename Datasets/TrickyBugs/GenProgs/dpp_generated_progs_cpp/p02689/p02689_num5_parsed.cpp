#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    vector<vector<int>> adj(N); // adjacency list
    vector<bool> isGood(N, true); // initialize all observatories as good

    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        A--; B--;

        if (H[A] <= H[B]) {
            isGood[A] = false;
        }
        if (H[B] <= H[A]) {
            isGood[B] = false;
        }

        adj[A].push_back(B);
        adj[B].push_back(A);
    }

    int goodObservatories = 0;

    for (int i = 0; i < N; i++) {
        bool isGoodObservatory = true;

        for (int j : adj[i]) { // iterate over adjacent observatories
            if (H[j] >= H[i]) { // if any adjacent observatory has equal or greater elevation, i is not good
                isGoodObservatory = false;
                break;
            }
        }

        if (isGoodObservatory) {
            goodObservatories++;
        }
    }

    cout << goodObservatories << endl;

    return 0;
}