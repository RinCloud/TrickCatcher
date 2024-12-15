#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<string> a(n), b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    
    for(int x=0;x<=n-m;x++){
        for(int y=0;y<=n-m;y++){
            bool flag = true;
            for(int i=0;i<m;i++){
                for(int j=0;j<m;j++){
                    if(a[x+i][y+j]!=b[i][j]){
                        flag = false;
                        break;
                    }
                }
                if(!flag) break;
            }
            if(flag){
                cout<<"Yes";
                return 0;
            }
        }
    }
    cout<<"No";
}