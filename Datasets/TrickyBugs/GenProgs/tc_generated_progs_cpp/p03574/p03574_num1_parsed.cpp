#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<string> grid(n);
    for(int i=0;i<n;i++) cin>>grid[i];
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(grid[i][j]=='.') {
                int bombs = 0;
                if(i-1>=0 && j-1>=0 && grid[i-1][j-1]=='#') bombs++;
                if(i-1>=0 && grid[i-1][j]=='#') bombs++;
                if(i-1>=0 && j+1<m && grid[i-1][j+1]=='#') bombs++;
                if(j-1>=0 && grid[i][j-1]=='#') bombs++;
                if(j+1<m && grid[i][j+1]=='#') bombs++;
                if(i+1<n && j-1>=0 && grid[i+1][j-1]=='#') bombs++;
                if(i+1<n && grid[i+1][j]=='#') bombs++;
                if(i+1<n && j+1<m && grid[i+1][j+1]=='#') bombs++;
                
                grid[i][j] = '0' + bombs;
            }
        }
    }
    
    for(int i=0;i<n;i++) {
        cout<<grid[i]<<endl;
    }
    
    return 0;
}