#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> seat(N, vector<int>(N));
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin >> seat[i][j];
        }
    }
    
    vector<int> row(N*N+1);
    vector<int> col(N*N+1);
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            row[seat[i][j]] = i;
            col[seat[i][j]] = j;
        }
    }
    
    int cnt = 0;
    
    for(int i=2; i<=N*N; i++) {
        int cur = seat[row[i]][col[i]];
        int prev = seat[row[i-1]][col[i-1]];
        
        if(row[i] > row[i-1] || col[i] > col[i-1]) 
            cnt++;
        
        if(cur < prev) {
            swap(row[prev], row[cur]);
            swap(col[prev], col[cur]);
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}