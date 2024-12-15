#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<string, int> votes;
    int maxCount = 0;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        votes[s]++;
        maxCount = max(maxCount, votes[s]);
    }

    set<string> result;
    for (auto it = votes.begin(); it != votes.end(); ++it) {
        if (it->second == maxCount) {
            result.insert(it->first);
        }
    }

    for (auto it = result.begin(); it != result.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}