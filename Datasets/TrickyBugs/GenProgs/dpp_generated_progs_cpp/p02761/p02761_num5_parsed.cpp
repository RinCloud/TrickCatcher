#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> digits(N, -1);
    for (int i = 0; i < M; i++) {
        int s, c;
        cin >> s >> c;
        if (digits[s - 1] != -1 && digits[s - 1] != c) {
            cout << -1 << endl;
            return 0;
        }
        digits[s - 1] = c;
    }

    if (digits[0] == 0 && N > 1) {
        cout << -1 << endl;
        return 0;
    }

    int number = 0;
    for (int i = 0; i < N; i++) {
        if (digits[i] == -1) {
            // Check if it is the first digit and allow 0 or not
            if (i == 0 && N > 1) {
                number = 1;
            }
            break;
        }
        number = number * 10 + digits[i];
    }

    cout << number << endl;

    return 0;
}