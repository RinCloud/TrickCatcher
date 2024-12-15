#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    int r=0,w=0; //initialize r and w as 0
    for(int i=0;i<s.size();i++){
        if(s[i]=='R'){
            r++;
        }
    }
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='R'){
            if(i>r-1){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}