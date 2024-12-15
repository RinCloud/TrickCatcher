#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<char, int> count;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        for (char c : s)
            count[c]++;
    }

    string result = "";

    for (auto it : count) {
        if (it.second == n) {
            char c = it.first;
            int freq = it.second;
            
            while (freq > 0) {
                result += c;
                freq--;
            }
        }
    }

    sort(result.begin(), result.end());

    cout << result << endl;

    return 0;
}