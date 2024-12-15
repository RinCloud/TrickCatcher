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

    int booksRead = 0;
    int timeRemaining = K;

    while (!A.empty() && !B.empty() && timeRemaining >= min(A[0], B[0])) {
        if (A[0] < B[0]) {
            timeRemaining -= A[0];
            A.erase(A.begin());
        } else {
            timeRemaining -= B[0];
            B.erase(B.begin());
        }
        booksRead++;
    }

    cout << booksRead << endl;

    return 0;
}