#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string S;
    cin >> S;

    int N = S.size();

    unordered_map<char, bool> E;
    for (int i = 0; i < N; ++i) {
        E[S[i]] = true;
    }

    bool NS = E.count('N') && E.count('S');
    bool WE = E.count('W') && E.count('E');

    cout << (NS && WE ? "Yes" : "No") << endl;

    return 0;
}
