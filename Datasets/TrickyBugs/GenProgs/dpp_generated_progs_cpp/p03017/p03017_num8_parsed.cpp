#include <iostream>
#include <string>

using namespace std;

bool is_possible(int N, int A, int B, int C, int D, string& S) {
    // Check if there is a rock between A and B
    for (int i = A; i < B; i++) {
        if (S[i - 1] == '#') {
            return false;
        }
    }
    // Check if there is a rock between C and D
    for (int i = C; i < D; i++) {
        if (S[i - 1] == '#') {
            return false;
        }
    }
    // Check if there is a rock between B and C
    for (int i = B; i < C; i++) {
        if (S[i - 1] == '#') {
            return false;
        }
    }
    // Check if A-1 is reachable from A
    if (A + 1 < B && S[A + 1 - 1] == '.') {
        return true;
    }
    // Check if D+1 is reachable from D
    if (D + 1 <= N && S[D + 1 - 1] == '.') {
        return true;
    }
    // Check if A-2 is reachable from A
    if (A + 2 <= B && S[A + 2 - 1] == '.') {
        return true;
    }
    // Check if D+2 is reachable from D
    if (D + 2 <= N && S[D + 2 - 1] == '.') {
        return true;
    }
    return false;
}

int main() {
    int N, A, B, C, D;
    string S;
    cin >> N >> A >> B >> C >> D;
    cin >> S;

    if (is_possible(N, A, B, C, D, S)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}