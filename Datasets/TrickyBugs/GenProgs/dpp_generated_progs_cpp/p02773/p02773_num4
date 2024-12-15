#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    map<string, int> count;
    int maxCount = 0;

    for (int i = 0; i < N; i++) {
        string vote;
        cin >> vote;
        count[vote]++;
        maxCount = max(maxCount, count[vote]);
    }

    set<string> ans;

    for (auto it : count) {
        if (it.second == maxCount) {
            ans.insert(it.first);
        }
    }

    for (auto it : ans) {
        cout << it << endl;
    }

    return 0;
}