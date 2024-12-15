#include <iostream>
#include <vector>

using namespace std;

// Function to compute the area of the white region
int computeWhiteArea(int W, int H, int N, vector<int>& x, vector<int>& y, vector<int>& a) {
    // Create a 2D array to represent the painted region
    vector<vector<bool>> painted(W+1, vector<bool>(H+1, false));
    
    // Iterate over the points and paint the region accordingly
    for (int i = 0; i < N; i++) {
        if (a[i] == 1) {
            for (int j = 0; j < x[i]; j++) {
                for (int k = 0; k <= H; k++) {
                    painted[j][k] = true;
                }
            }
        }
        else if (a[i] == 2) {
            for (int j = x[i]+1; j <= W; j++) {
                for (int k = 0; k <= H; k++) {
                    painted[j][k] = true;
                }
            }
        }
        else if (a[i] == 3) {
            for (int j = 0; j <= W; j++) {
                for (int k = 0; k < y[i]; k++) {
                    painted[j][k] = true;
                }
            }
        }
        else if (a[i] == 4) {
            for (int j = 0; j <= W; j++) {
                for (int k = y[i]+1; k <= H; k++) {
                    painted[j][k] = true;
                }
            }
        }
    }
    
    // Compute the area of the white region
    int whiteArea = 0;
    for (int i = 0; i <= W; i++) {
        for (int j = 0; j <= H; j++) {
            if (!painted[i][j]) {
                whiteArea++;
            }
        }
    }
    
    return whiteArea;
}

// Main function
int main() {
    // Read input values
    int W, H, N;
    cin >> W >> H >> N;
    
    vector<int> x(N);
    vector<int> y(N);
    vector<int> a(N);
    
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i] >> a[i];
    }
    
    // Compute and print the area of the white region
    int whiteArea = computeWhiteArea(W, H, N, x, y, a);
    cout << whiteArea << endl;
    
    return 0;
}