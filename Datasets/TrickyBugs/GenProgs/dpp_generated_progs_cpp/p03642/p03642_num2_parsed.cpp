#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int N;
    cin >> N;

    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }

    int num_operations = 0;

    for (int i = 2; i <= 10000000; i++) {
        if (!is_prime(i)) {
            continue;
        }

        bool flip = false;
        for (int j = 0; j < N; j++) {
            if (cards[j] >= i && cards[j] < i + N) {
                flip = true;
                break;
            }
        }

        if (flip) {
            num_operations++;
            for (int j = 0; j < N; j++) {
                if (cards[j] >= i && cards[j] < i + N) {
                    cards[j] = i + N - 1 - (cards[j] - i);
                }
            }
        }
    }

    cout << num_operations << endl;

    return 0;
}