#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int N, M;
    cin >> N;
    unordered_map<string, int> blue;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        blue[s]++;
    }
    cin >> M;
    unordered_map<string, int> red;
    for (int i = 0; i < M; i++) {
        string t;
        cin >> t;
        red[t]++;
    }
    int maxCount = 0;
    for (auto it : blue) {
        int count = it.second - red[it.first];
        if (count > maxCount) {
            maxCount = count;
        }
    }
    cout << maxCount << endl;
    return 0;
}