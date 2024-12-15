#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to check if template image B is contained in image A
bool containTemplateImage(const vector<string>& A, const vector<string>& B) {
    int N = A.size(); // Number of rows in image A
    int M = B.size(); // Number of rows in template image B
    
    // Iterate over each possible starting position of template image B in image A
    for (int i = 0; i <= N - M; i++) {
        for (int j = 0; j <= N - M; j++) {
            bool match = true; // Boolean variable to track if all pixels in template image B match with corresponding pixels in image A
            
            // Iterate over each pixel in template image B
            for (int k = 0; k < M; k++) {
                for (int l = 0; l < M; l++) {
                    // Check if pixel in template image B matches with corresponding pixel in image A
                    if (A[i + k][j + l] != B[k][l]) {
                        match = false;
                        break;
                    }
                }
                if (!match) {
                    break;
                }
            }
            
            // If all pixels in template image B match with corresponding pixels in image A, return true
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
    vector<string> B(M);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }
    
    // Check if template image B is contained in image A
    if (containTemplateImage(A, B)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}