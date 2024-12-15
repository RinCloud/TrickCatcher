#include <bits/stdc++.h>
using namespace std;

map<string, int> m;
vector<string> blue_cards;
vector<string> red_cards;

int main()
{
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        blue_cards.push_back(s);
        m[s]++;
    }

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        red_cards.push_back(s);
        if (m.find(s) != m.end()) {
            m[s]--;
        }
    }

    int ma = 0;
    for (const auto& card : blue_cards) {
        if (m[card] > ma) {
            ma = m[card];
        }
    }

    cout << ma << endl;
    return 0;
}
