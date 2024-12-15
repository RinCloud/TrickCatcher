#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string S;
    cin >> S;

    int n = S.length();
    vector<int> count(n + 1, 0);
    vector<int> mods(2019, 0);

    int result = 0;
    int currMod = 0;
    mods[0] = 1;

    for (int i = n - 1; i >= 0; i--) {
        int digit = S[i] - '0';
        currMod = (digit * mods[1] + currMod) % 2019;

        result += mods[currMod];
        mods[currMod]++;
    }

    cout << result << endl;

    return 0;
}