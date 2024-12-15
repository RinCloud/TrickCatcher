#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int Q;
    cin >> Q;

    vector<pair<int, int>> queries(Q);
    for (int i = 0; i < Q; i++) {
        cin >> queries[i].first >> queries[i].second;
    }

    for (int i = 0; i < Q; i++) {
        int A = queries[i].first;
        int B = queries[i].second;
        int max_score = min(A - 1, B - 1) + min(A - 1, B - 2) + min(A - 2, B - 1);
        cout << max_score << endl;
    }

    return 0;
}