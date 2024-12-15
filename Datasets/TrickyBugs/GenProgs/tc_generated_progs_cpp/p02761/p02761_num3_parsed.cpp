#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> kazu(n, -1);
    int f=0;
    int g=0;
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        if(kazu.at(a-1)!=-1&&kazu.at(a-1)!=b){
            f=-1;
        }else{
            kazu.at(a-1) = b;
        }
    }
    if(n>1 && kazu.at(0) == 0) {
        cout << -1 << endl;
        return 0;
    }
    if(n==1 && kazu.at(0)==-1) {
        cout << 0 << endl;
        return 0;
    }
    if(n==1 && kazu.at(0)!=-1) {
        cout << kazu.at(0) << endl;
        return 0;
    }
    if(f==-1) {
        cout << -1 << endl;
        return 0;
    }
    if(g==0) {
        kazu.at(0)=1;
    }
    for(int i=0;i<n;i++){
        cout << kazu.at(i);
    }
    cout << endl;    
}