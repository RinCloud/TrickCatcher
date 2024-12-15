#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    int ans = 0;
    for (int len = 1; len <= N; len++) {
        for (int i = 0; i + len < N; i++) {
            string sub = S.substr(i, len);
            size_t found = S.find(sub, i + len);
            if (found != string::npos) {
                ans = max(ans, len);
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}