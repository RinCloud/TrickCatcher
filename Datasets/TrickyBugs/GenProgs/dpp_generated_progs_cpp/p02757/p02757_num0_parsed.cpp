#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, P;
    string S;
    cin >> N >> P >> S;

    vector<int> mods(P);
    long long ans = 0;
    int ten = 1;
    int cur = 0;
    mods[0] = 1;

    for(int i = N - 1; i >= 0; i--) {
        cur = (cur + (S[i] - '0') * ten) % P;
        ans += mods[cur];
        mods[cur]++;
        ten = (ten * 10) % P;
    }

    cout << ans << endl;

    return 0;
}