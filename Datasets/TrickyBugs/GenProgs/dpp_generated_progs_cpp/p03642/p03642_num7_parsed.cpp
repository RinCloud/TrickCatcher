
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
    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    
    int max_x = x[N - 1];
    int max_prime = max(max_x, 3);
    int ops = 0;
    vector<bool> cards(max_x + 1, true);
    
    for (int p = 3; p <= max_prime; p++) {
        if (is_prime(p)) {
            for (int i = 0; i < N; i++) {
                int start = max(x[i], p);
                for (int j = start; j <= max_x; j += p) {
                    cards[j] = !cards[j];
                }
            }
            ops++;
        }
    }
    
    cout << ops << endl;
    
    return 0;
}
