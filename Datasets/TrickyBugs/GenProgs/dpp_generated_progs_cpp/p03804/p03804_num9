#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to check if the template image B is contained in the image A
bool isTemplateContained(const vector<string>& A, const vector<string>& B) {
    int N = A.size();
    int M = B.size();

    // Iterate through each possible starting position of the template image B in the image A
    for (int i = 0; i <= N - M; i++) {
        for (int j = 0; j <= N - M; j++) {
            bool match = true;
            
            // Check if the template image B matches the corresponding pixels in image A
            for (int k = 0; k < M; k++) {
                for (int l = 0; l < M; l++) {
                    if (A[i+k][j+l] != B[k][l]) {
                        match = false;
                        break;
                    }
                }
                if (!match) {
                    break;
                }
            }

            // If all pixels of the template image B match, return true
            if (match) {
                return true;
            }
        }
    }

    // If no match is found, return false
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
    
    // Check if the template image B is contained in the image A
    bool contained = isTemplateContained(A, B);

    // Print the result
    if (contained) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}