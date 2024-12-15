#include <iostream>
#include <string>

using namespace std;

bool isPossible(int N, int A, int B, int C, int D, const string& S)
{
    // Check if there is any rock between A and C
    for (int i = A; i < C; ++i) {
        if (S[i - 1] == '#') {
            return false;
        }
    }

    // Check if there is any rock between B and D
    for (int i = B; i < D; ++i) {
        if (S[i - 1] == '#') {
            return false;
        }
    }

    // Check if B is to the left of C and D is to the right of A
    if (B > C || D < A) {
        return false;
    }

    // If B is already to the left of C, check if D is to the right of C
    if (B < C && D > C) {
        return true;
    }

    // If D is already to the right of A, check if B is to the left of A
    if (D > A && B < A) {
        return true;
    }

    // If B and D are on the same side, check if there is at least one empty square between them
    for (int i = B; i < D; ++i) {
        if (S[i - 1] == '.') {
            return true;
        }
    }

    return false;
}

int main()
{
    int N, A, B, C, D;
    string S;
    cin >> N >> A >> B >> C >> D >> S;

    if (isPossible(N, A, B, C, D, S)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}