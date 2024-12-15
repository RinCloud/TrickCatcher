#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<string> B(M);
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    bool contained = false;

    for (int i = 0; i <= N - M; i++) {
        for (int j = 0; j <= N - M; j++) {
            bool match = true;
            for (int k = 0; k < M; k++) {
                for (int l = 0; l < M; l++) {
                    if (B[k][l] != A[i+k][j+l]) {
                        match = false;
                        break;
                    }
                }
                if (!match) {
                    break;
                }
            }
            if (match) {
                contained = true;
                break;
            }
        }
        if (contained) {
            break;
        }
    }

    if (contained) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}