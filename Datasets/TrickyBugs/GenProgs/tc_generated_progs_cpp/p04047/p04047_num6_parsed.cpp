#include <bits/stdc++.h>

int a[210], n;

int main() {
	scanf("%d", &n); n*=2;
	for (int i=1; i<=n; i++) scanf("%d", a+i);
	std::sort(a+1,a+n+1);
	int ans=0;
	for (int i=n-1; i>0; i-=2) ans+=a[i];
	printf("%d", ans);
	return 0;
}