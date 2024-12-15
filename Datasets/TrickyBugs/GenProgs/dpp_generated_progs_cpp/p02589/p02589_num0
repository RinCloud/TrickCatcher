#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<string> strings(N);
    unordered_set<string> uniqueStrings;

    for (int i = 0; i < N; i++) {
        cin >> strings[i];
        uniqueStrings.insert(strings[i]);
    }

    int count = 0;

    for (int i = 0; i < N; i++) {
        string str = strings[i];
        int len = str.length();

        for (int j = 0; j < len - 1; j++) {
            string prefix = str.substr(0, j + 1);
            string suffix = str.substr(j + 1);

            if (uniqueStrings.count(prefix) > 0 || uniqueStrings.count(suffix) > 0) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}