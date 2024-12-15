#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isContained(int N, int M, const vector<string>& A, const vector<string>& B) {
    for (int i = 0; i <= N - M; ++i) {
        for (int j = 0; j <= N - M; ++j) {
            bool isMatched = true;
            for (int k = 0; k < M; ++k) {
                for (int l = 0; l < M; ++l) {
                    if (A[i + k][j + l] != B[k][l]) {
                        isMatched = false;
                        break;
                    }
                }
                if (!isMatched) {
                    break;
                }
            }
            if (isMatched) {
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
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    vector<string> B(M);
    for (int i = 0; i < M; ++i) {
        cin >> B[i];
    }
    
    bool result = isContained(N, M, A, B);
    
    if (result) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}