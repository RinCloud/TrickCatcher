#include <iostream>

using namespace std;

int f(int x, int m) {
    return x % m;
}

int main() {
    long long N;
    int X, M;
    cin >> N >> X >> M;

    long long sum = X;
    int prev = X;

    for (int i = 2; i <= N; i++) {
        int curr = f(prev * prev, M);
        sum += curr;
        prev = curr;

        if (curr == X) {
            int cycle_length = i - 1;
            int remaining = N - i + 1;
            sum += (remaining / cycle_length) * sum;

            for (int j = 0; j < remaining % cycle_length; j++) {
                sum += f(prev * prev, M);
                prev = f(prev * prev, M);
            }

            break;
        }
    }

    cout << sum << endl;

    return 0;
}