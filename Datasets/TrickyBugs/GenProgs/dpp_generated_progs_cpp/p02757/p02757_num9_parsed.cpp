#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N, P;
    string S;
    cin >> N >> P >> S;

    vector<int> count_modulo(P, 0);
    int current_modulo = 0;
    long long result = 0;

    // Count all substrings modulo P
    for (int i = N - 1; i >= 0; i--) {
        current_modulo = (current_modulo + (S[i] - '0') * 1LL * power(10, N - 1 - i, P)) % P;
        count_modulo[current_modulo]++;
    }

    // Compute the result
    for (int i = 0; i < P; i++) {
        result += count_modulo[i] * 1LL * (count_modulo[i] - 1) / 2;
    }
    result += count_modulo[0];

    cout << result << endl;

    return 0;
}