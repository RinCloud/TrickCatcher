#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<int> A(N), B(M);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    int a_idx = 0, b_idx = 0;
    int time = 0;
    int books_read = 0;

    while (a_idx < N && time + A[a_idx] <= K) {
        time += A[a_idx];
        a_idx++;
        books_read++;
    }

    while (b_idx < M && a_idx >= 0) {
        time += B[b_idx];
        b_idx++;

        while (time > K && a_idx > 0) {
            a_idx--;
            time -= A[a_idx];
        }

        if (time <= K) {
            books_read = max(books_read, a_idx + b_idx);
        }
    }

    cout << books_read << endl;

    return 0;
}
