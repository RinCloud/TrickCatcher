#include <bits/stdc++.h>
using namespace std;

map <string,int > m;
string str[120];
int main(){
    int ma=0,n,i; 
    string st;
    cin >> n;
    for(i=1;i<=n;i++){
        string s;
        cin >> s;
        str[i]=s;
        m[ str[i] ]++;
    }   
    cin >> n;
    for(i=1;i<=n;i++){
        string s;
        cin >> s;
        st=s;
        m[st]--; 
    }       
    for(i=1;i<=n;i++){
        if(m[ str[i] ]>ma) ma= m [str[i]] ;
    }       
    cout << ma;
}