#include <iostream>
using namespace std;

int main() {
    long long int N, X, M;
    cin >> N >> X >> M;

    long long int A = X;
    long long int sum = A;
    long long int cnt = 1;
    long long int cycle_sum = 0;
    long long int cycle_len = 0;
    long long int cycle_start = 0;

    while (cnt < N) {
        A = (A * A) % M;
        sum += A;
        cnt++;

        if (A == X) {
            cycle_start = cnt;
            break;
        }
    }

    if (cnt == N) {
        cout << sum << endl;
        return 0;
    }

    cnt--;

    while (cnt < N) {
        A = (A * A) % M;
        cycle_sum += A;
        cnt++;
    }

    long long int num_of_cycles = (N - cycle_start) / (cnt - cycle_start + 1);
    long long int remaining_elements = N - cycle_start - num_of_cycles * (cnt - cycle_start + 1);

    sum += (num_of_cycles * cycle_sum);
    cnt = cycle_start;

    while (remaining_elements > 0) {
        A = (A * A) % M;
        sum += A;
        remaining_elements--;
        cnt++;
    }

    cout << sum << endl;

    return 0;
}