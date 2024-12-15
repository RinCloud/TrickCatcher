#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isTemplateContained(const vector<string>& A, const vector<string>& B, int N, int M) {
    for (int i = 0; i <= N - M; i++) {
        for (int j = 0; j <= N - M; j++) {
            bool isContained = true;
            for (int k = 0; k < M; k++) {
                for (int l = 0; l < M; l++) {
                    if (A[i + k][j + l] != B[k][l]) {
                        isContained = false;
                        break;
                    }
                }
                if (!isContained) break;
            }
            if (isContained) return true;
        }
    }
    return false;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> A(N);
    vector<string> B(M);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    if (isTemplateContained(A, B, N, M)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}