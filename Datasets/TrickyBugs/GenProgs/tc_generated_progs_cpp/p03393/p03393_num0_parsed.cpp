#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
char s[30],w[30];
int main() {
    cin>>s;
    int n=strlen(s);
    for(int i=0;i<n;i++) w[s[i]-'a']=1;
    for(int i=n-1;~i;i--) {
        for(int j=max(0,s[i]-'a'+1);j<26;j++) {
            if(!w[j]) {
                s[i] = j + 'a';
                cout << s << endl;
                return 0;
            }
        }
        w[s[i]-'a']=0;
    }
    cout << "-1" << endl;
    return 0;
}
