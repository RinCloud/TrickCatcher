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

    int maxVotes = 0;

    for (auto& pair : votes) {
        maxVotes = max(maxVotes, pair.second);
    }

    vector<string> result;

    for (auto& pair : votes) {
        if (pair.second == maxVotes) {
            result.push_back(pair.first);
        }
    }

    sort(result.begin(), result.end());

    for (auto& s : result) {
        cout << s << endl;
    }

    return 0;
}