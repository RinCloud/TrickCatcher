#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool isShiritoriValid(int n, vector<string> words) {
    unordered_set<string> wordSet;
    for (int i = 0; i < n; i++) {
        if (i > 0 && words[i-1].back() != words[i].front()) {
            return false;
        }
        if (wordSet.find(words[i]) != wordSet.end()) {
            return false;
        }
        wordSet.insert(words[i]);
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    if (isShiritoriValid(n, words)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}