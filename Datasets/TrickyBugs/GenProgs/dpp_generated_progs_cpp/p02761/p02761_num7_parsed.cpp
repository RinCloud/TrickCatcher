#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    string num(N, ' ');

    for (int i = 0; i < M; i++) {
        int s, c;
        cin >> s >> c;
        s--;

        if (num[s] != ' ' && num[s] != c + '0') {
            cout << -1 << endl;
            return 0;
        }

        num[s] = c + '0';
    }

    if (num[0] == '0' && N != 1) {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 0; i < N; i++) {
        if (num[i] == ' ') {
            num[i] = '0';
        }
    }

    cout << num << endl;

    return 0;
}