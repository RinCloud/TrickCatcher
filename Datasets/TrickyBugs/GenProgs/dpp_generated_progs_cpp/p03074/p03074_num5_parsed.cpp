#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;

    int ans = 0;
    int cnt = 0;
    int flip = 0;

    for (int i = 0; i < N; i++) {
        if (S[i] == '0') {
            cnt++;
        } else {
            flip++;
        }

        if (flip > K) {
            if (S[i-cnt] == '1') {
                flip--;
            }

            cnt--;
        }

        ans = max(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}