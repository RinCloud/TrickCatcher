#include <iostream>
#include <vector>

using namespace std;

int f(int x, int m) {
    return x % m;
}

int main() {
    long long N, X, M;
    cin >> N >> X >> M;

    vector<int> A;
    A.push_back(X);

    int cycleStart = -1;
    int cycleEnd = -1;
    long long cycleSum = 0;

    for (int i = 1; i <= N; i++) {
        int next = f(A[i - 1] * A[i - 1], M);
        A.push_back(next);

        if (cycleStart == -1 && i >= 2 && next == A[1]) {
            cycleStart = i - 1;
        }

        if (cycleStart != -1 && next == A[cycleStart]) {
            cycleEnd = i - 1;
            break;
        }

        if (cycleStart != -1) {
            cycleSum += next;
        }
    }

    long long sum = 0;
    if (cycleStart != -1) {
        long long cycleLength = cycleEnd - cycleStart + 1;
        long long cycles = (N - cycleStart + 1) / cycleLength;
        long long remainder = (N - cycleStart + 1) % cycleLength;

        long long cycleSumTotal = cycleSum * cycles;
        for (int i = cycleStart; i <= cycleStart + remainder - 1; i++) {
            cycleSumTotal += A[i];
        }

        sum = cycleSumTotal;
    } else {
        for (int i = 0; i <= N; i++) {
            sum += A[i];
        }
    }

    cout << sum << endl;

    return 0;
}