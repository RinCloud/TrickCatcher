#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> balls(N);
    for (int i = 0; i < N; i++) {
        cin >> balls[i];
    }

    map<int, int> counter;
    for (int i = 0; i < N; i++) {
        counter[balls[i]]++;
    }

    int numRewrites = 0;
    vector<int> counts;
    for (auto it = counter.begin(); it != counter.end(); ++it) {
        counts.push_back(it->second);
    }
    sort(counts.begin(), counts.end());

    for (int i = 0; i < counts.size() - K; i++) {
        numRewrites += counts[i];
    }

    cout << numRewrites << endl;

    return 0;
}