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
		for(int j=max(97,s[i]+1);j<='z';j++) {
			if(!w[j-'a']) {
				w[j-'a'] = 1;
				s[i] = j;
				for(int k=i+1;(s[k]=97);w[0]=1,k++);
				puts(s);
				return 0;
			}
		}
		w[s[i]-'a']=0;
	}
	puts("-1");
	return 0;
}
