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
    for(int i=n;~i;i--) {
	for(int j=max(97,s[i]+1);j<='z';j++)
	    if(!w[j-'a']) return s[i]=j,puts(s),0;
	if(i<n) w[s[i]-'a']=s[i]=0;
    }
    puts("-1");
    return 0;
}