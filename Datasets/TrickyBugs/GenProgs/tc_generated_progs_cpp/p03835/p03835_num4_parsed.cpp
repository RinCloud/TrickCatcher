#include<bits/stdc++.h>
using namespace std;
int main(){
	int k , s ,cnt = 0;
	cin>>k>>s;
	for(int x=0;x<=k;x++){
		for(int i=0;i<=k;i++){
			int z=s-(x+i);
			if((z>=0)&&(z<=k)){
				cnt++;
				
			}
		}
	}
	cout<<cnt;
}