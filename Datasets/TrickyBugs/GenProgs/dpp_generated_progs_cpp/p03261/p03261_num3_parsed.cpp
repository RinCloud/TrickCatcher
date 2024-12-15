#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> words(N);
    for (int i = 0; i < N; i++) {
        cin >> words[i];
    }
    set<string> s;
    s.insert(words[0]);
    for (int i = 1; i < N; i++) {
        if (s.count(words[i]) || words[i][0] != words[i-1][words[i-1].size()-1]) {
            cout << "No" << endl;
            return 0;
        }
        s.insert(words[i]);
    }
    cout << "Yes" << endl;
    return 0;
}