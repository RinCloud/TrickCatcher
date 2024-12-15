#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    string a;
    cin >> a;
    
    vector<vector<int>> x(N + 1, vector<int>(N + 1));
    
    for (int j = 1; j <= N; j++) {
        x[1][j] = a[j - 1] - '0';
    }
    
    for (int i = 2; i <= N; i++) {
        for (int j = 1; j <= N + 1 - i; j++) {
            x[i][j] = abs(x[i - 1][j] - x[i - 1][j + 1]);
        }
    }
    
    cout << x[N][1] << endl;
    
    return 0;
}