#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    long long k;
    cin >> s >> k;

    vector<long long> counts(10);
    for(char c : s) {
        counts[c - '0']++;
    }

    string ans;
    for(int i = 1; i <= 9; ++i) {
        ans += string(counts[i], i + '0');
    }

    if(k <= ans.length()) {
        cout << ans[k - 1] << endl;
        return 0;
    }

    k -= ans.length();

    vector<long long> sizes;
    for(int i = 1; i <= 9; ++i) {
        sizes.push_back(counts[i] * (counts[i] + 1) / 2);
    }

    int index = 0;
    while(k > sizes[index]) {
        k -= sizes[index];
        index++;
    }

    string curr;
    while(index >= 0) {
        if(k > counts[index]) {
            curr += string(counts[index], index + '0');
            k -= counts[index];
        } else {
            curr += string(k, index + '0');
            break;
        }
        index--;
    }

    cout << curr[k - 1] << endl;

    return 0;
}