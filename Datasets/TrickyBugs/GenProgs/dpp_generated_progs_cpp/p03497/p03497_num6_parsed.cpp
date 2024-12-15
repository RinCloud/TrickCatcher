#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }

    unordered_map<int, int> freq;
    int ans = 0;
    for (int i=0; i<N; i++) {
        freq[A[i]]++;
    }
    vector<pair<int, int>> freqList;
    for (auto it: freq) {
        freqList.push_back(it);
    }
    int size = freqList.size();
    if (size <= K) {
        cout << 0 << endl;
    } else {
        sort(freqList.begin(), freqList.end(), [](pair<int, int> a, pair<int, int> b) {
            return a.second < b.second;
        });
        for (int i=0; i<size-K; i++) {
            ans += freqList[i].second;
        }
        cout << ans << endl;
    }
    return 0;
}