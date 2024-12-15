#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> headlines(n);
    for (int i = 0; i < n; i++) {
        cin >> headlines[i];
    }

    unordered_map<char, int> counts;
    for (const string& headline : headlines) {
        unordered_map<char, int> temp;
        for (char c : headline) {
            temp[c]++;
        }
        for (auto& entry : temp) {
            counts[entry.first] = min(counts[entry.first], entry.second);
        }
    }

    string result;
    for (auto& entry : counts) {
        result += string(entry.second, entry.first);
    }

    sort(result.begin(), result.end());

    cout << result << endl;

    return 0;
}