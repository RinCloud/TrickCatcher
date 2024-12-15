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

    int max_card = cards[N-1];
    vector<bool> flipped(max_card+1);
    for (int i = 0; i < N; i++) {
        flipped[cards[i]] = true;
    }

    int operations = 0;

    // Continue flipping until all cards are face down
    while (true) {
        bool all_down = true;
        int prime = 2;
        int next_prime = -1;
        for (int i = 2; i <= max_card; i++) {
            if (is_prime(i)) {
                prime = i;
                next_prime = i;
                break;
            }
        }

        if (prime > max_card) {
            break;
        }

        while (next_prime <= max_card) {
            if (flipped[next_prime]) {
                all_down = false;
            }
            next_prime += prime;
        }

        if (all_down) {
            break;
        }

        for (int i = prime; i <= max_card; i += prime) {
            flipped[i] = !flipped[i];
        }

        operations++;
    }

    cout << operations << endl;

    return 0;
}