#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    int r = 0;
    int cnt = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='R'){
            r++;
        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='W' && i<r){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
