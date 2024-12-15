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
        for(int j=s[i]-'a'+1;j<='z'-'a';j++) {
    	    if(!w[j]) {
                s[i]='a'+j;
                for(int k=i+1;k<n;k++) {
                    for(int l=0;l<26;l++) {
                        if(!w[l]) {
                            w[l]=1;
                            s[k]=l+'a';
                            break;
                        }
                    }
                }
                cout<<s<<endl;
                return 0;
    	    }
        }
        w[s[i]-'a'] = 0;
    }
    puts("-1");
    return 0;
}
