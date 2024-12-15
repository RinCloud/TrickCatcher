#include<bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    
    vector<vector<int>> c(10, vector<int>(10));
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> c[i][j];
        }
    }
    
    vector<vector<int>> A(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }
    
    // Floyd-Warshall algorithm to find the minimum cost to transform each digit into 1
    for (int k = 0; k < 10; k++) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
            }
        }
    }
    
    // Calculate the minimum total amount of MP required to turn every digit on the wall into 1
    int totalCost = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (A[i][j] != -1) {
                totalCost += c[A[i][j]][1];
            }
        }
    }
    
    cout << totalCost << endl;
    
    return 0;
}