#include <bits/stdc++.h>
using namespace std;
long long k, n, fl, p, w;
vector<int> seq;

long long X(int m){
	long long s=1,x=p*(k-1);
	for (int i=0;i<=m;++i){
		s*=k; 
		if (!fl && s-1 > x) return p+1;
	}
	return (s-1)/(k-1);
}

void generateSeq(int len){
	for(int i = 1; i <= len; i++){
		w = X(n-i);
		if (!fl && p < w){
			seq.push_back(k+1>>1);
			++p;
		}
		else{
			fl = 1;
			if(p >= 0){
            	int j = w*k + p + 1 >> 1;
            	if(j <= p){
                	return;
            	}
            	j = (j - p - 1) / w + 1;
            	seq.push_back(j);
            	p += (j + j - k - 1) * w + 1;
        	}
        	else{
            	int j = w*k - p + 1 >> 1;
            	if(j > w*k){
                	return;
            	}
            	j = (j - 1) / w + 1;
            	seq.push_back(j);
            	p += (j + j - k - 1) * w + 1;
        	}
		}
	}
}

int main(){
	scanf("%lld%lld",&k,&n);
	p = 0;
	if (k==1){
		for (int i=1;i<=(n+1)/2;++i) 
			printf("1 ");
		puts(""); 
		return 0;
	}
	if (k&1){
		generateSeq(n);
    }
    else{
		printf("%d ",k/2);
		for (int i=1;i<n;++i) 
			printf("%lld ",k);
	}
    for(int i = 0; i < seq.size(); i++){
        cout << seq[i] << " ";
    }
	puts("");
	return 0;
}