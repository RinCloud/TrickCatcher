#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> S(N);
    unordered_map<string, int> count;

    for (int i = 0; i < N; i++) {
        cin >> S[i];

        // Remove the first two characters from the string
        string key = S[i].substr(2);
        count[key]++;
    }

    int result = 0;

    // Count the number of pairs where Limak can obtain
    // one string from the other
    for (auto& c : count) {
        int freq = c.second;
        result += (freq * (freq - 1)) / 2;
    }

    cout << result << endl;

    return 0;
}