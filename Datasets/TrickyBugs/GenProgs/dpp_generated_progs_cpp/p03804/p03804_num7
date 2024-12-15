#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isTemplateContained(vector<string>& A, vector<string>& B) {
    int N = A.size();
    int M = B.size();

    for (int i = 0; i <= N - M; i++) {
        for (int j = 0; j <= N - M; j++) {
            bool match = true;
            for (int k = 0; k < M; k++) {
                for (int l = 0; l < M; l++) {
                    if (A[i+k][j+l] != B[k][l]) {
                        match = false;
                        break;
                    }
                }
                if (!match) break;
            }
            if (match) return true;
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

    if (isTemplateContained(A, B)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}