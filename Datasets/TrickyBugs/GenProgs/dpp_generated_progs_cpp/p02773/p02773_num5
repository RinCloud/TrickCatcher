#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_map<string, int> votes;

    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        votes[s]++;
    }

    int maxVotes = 0;
    for (const auto& p : votes) {
        maxVotes = max(maxVotes, p.second);
    }

    vector<string> result;
    for (const auto& p : votes) {
        if (p.second == maxVotes) {
            result.push_back(p.first);
        }
    }

    sort(result.begin(), result.end());

    for (const auto& s : result) {
        cout << s << endl;
    }

    return 0;
}