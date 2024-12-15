#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

char s[30];
char w[30];

int main() {
    cin >> s;
    int n=strlen(s);
    for(int i=0;i<n;i++) w[s[i]-'a']=1;
    
    for(int i=n-1; i>=0; i--) {
        for(int j=max(97,s[i]+1); j<='z'; j++) {
            if(!w[j-'a']) {
                s[i]=j;
                cout<<s<<endl;
                return 0;
            }
        }
        w[s[i]-'a']=0;
    }
    puts("-1");
    return 0;
}
