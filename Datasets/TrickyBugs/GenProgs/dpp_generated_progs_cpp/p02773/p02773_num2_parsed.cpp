#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<string, int> votes;
    for (int i = 0; i < N; i++) {
        string vote;
        cin >> vote;
        votes[vote]++;
    }

    int maxVotes = 0;
    for (auto it = votes.begin(); it != votes.end(); it++) {
        maxVotes = max(maxVotes, it->second);
    }

    vector<string> result;
    for (auto it = votes.begin(); it != votes.end(); it++) {
        if (it->second == maxVotes) {
            result.push_back(it->first);
        }
    }

    sort(result.begin(), result.end());

    for (const string& res : result) {
        cout << res << endl;
    }

    return 0;
}