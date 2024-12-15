#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isTemplateContained(const vector<string>& A, const vector<string>& B) {
    int N = A.size();
    int M = B.size();

    for (int i = 0; i <= N - M; i++) {
        for (int j = 0; j <= N - M; j++) {
            bool match = true;
            for (int x = 0; x < M; x++) {
                for (int y = 0; y < M; y++) {
                    if (A[i + x][j + y] != B[x][y]) {
                        match = false;
                        break;
                    }
                }
                if (!match) {
                    break;
                }
            }
            if (match) {
                return true;
            }
        }
    }

    return false;
}

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

    bool result = isTemplateContained(A, B);
    if (result) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
