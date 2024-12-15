#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string S;
    cin >> S;

    int N = S.size();

    vector<int> E(256);
    for (int i = 0; i < N; ++i) {
        E[S[i]]++;
    }

    cout << (E['N'] == E['S'] && E['W'] == E['E'] ? "Yes" : "No") << endl;

    return 0;
}
