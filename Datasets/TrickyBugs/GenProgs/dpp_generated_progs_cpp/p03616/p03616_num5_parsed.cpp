#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read X
    int X;
    cin >> X;

    // Read K
    int K;
    cin >> K;

    // Read r
    vector<int> r(K);
    for (int i = 0; i < K; i++) {
        cin >> r[i];
    }

    // Read Q
    int Q;
    cin >> Q;

    // Read t and a
    vector<pair<int, int>> queries(Q);
    for (int i = 0; i < Q; i++) {
        cin >> queries[i].first >> queries[i].second;
    }

    // Calculate the amount of sand in bulb A for each query
    for (int i = 0; i < Q; i++) {
        int t = queries[i].first;
        int a = queries[i].second;

        // Determine if bulb A or bulb B is the upper bulb at time t
        if ((int)(lower_bound(r.begin(), r.end(), t) - r.begin()) % 2 == 0) {
            cout << a << endl;
        } else {
            cout << X - a << endl;
        }
    }

    return 0;
}