#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool checkContainment(const vector<string>& imageA, const vector<string>& templateB, int N, int M) {
    for (int i = 0; i <= N - M; i++) {
        for (int j = 0; j <= N - M; j++) {
            bool match = true;
            for (int k = 0; k < M; k++) {
                for (int l = 0; l < M; l++) {
                    if (imageA[i+k][j+l] != templateB[k][l]) {
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
    
    vector<string> imageA(N);
    vector<string> templateB(M);
    
    for (int i = 0; i < N; i++) {
        cin >> imageA[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> templateB[i];
    }
    
    bool result = checkContainment(imageA, templateB, N, M);
    
    if (result) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}