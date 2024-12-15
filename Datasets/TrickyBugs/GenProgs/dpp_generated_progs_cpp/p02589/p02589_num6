#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> strings(N);
    unordered_map<string, int> freq;

    for (int i = 0; i < N; i++) {
        cin >> strings[i];
        freq[strings[i]]++;
    }

    long long ans = 0;
    for (int i = 0; i < N; i++) {
        int len = strings[i].length();

        long long same = freq[strings[i]] - 1;
        long long reverse = freq[strings[i].substr(1)] - 1;

        ans += same * (same + reverse) / 2;
        ans += reverse * (reverse - 1) / 2;
    }

    cout << ans << endl;

    return 0;
}