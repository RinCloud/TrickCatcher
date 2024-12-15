#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Check if N is divisible by 4 or 7
    if (N % 4 == 0 || N % 7 == 0) {
        cout << "Yes" << endl;
        return 0;
    }

    // Checking all possible combinations
    for (int i = 1; i <= N / 4; i++) {
        for (int j = 1; j <= N / 7; j++) {
            if (4 * i + 7 * j == N) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}