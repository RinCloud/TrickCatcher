#include <iostream>
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

    int maxVotes = INT_MIN;

    for (auto it : votes) {
        maxVotes = max(maxVotes, it.second);
    }

    vector<string> maxVoteStrings;

    for (auto it : votes) {
        if (it.second == maxVotes) {
            maxVoteStrings.push_back(it.first);
        }
    }

    sort(maxVoteStrings.begin(), maxVoteStrings.end());

    for (auto s : maxVoteStrings) {
        cout << s << endl;
    }

    return 0;
}