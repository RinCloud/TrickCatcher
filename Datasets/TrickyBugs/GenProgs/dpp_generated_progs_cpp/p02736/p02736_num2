#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> digits(N);
    for (int i = 0; i < N; i++) {
        char c;
        cin >> c;
        digits[i] = c - '0';
    }
    
    vector<vector<int>> x(N, vector<int>(N, 0));
    
    for (int j = 0; j < N; j++) {
        x[0][j] = digits[j];
    }
    
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < N - i; j++) {
            x[i][j] = abs(x[i-1][j] - x[i-1][j+1]);
        }
    }
    
    cout << x[N-1][0] << endl;

    return 0;
}