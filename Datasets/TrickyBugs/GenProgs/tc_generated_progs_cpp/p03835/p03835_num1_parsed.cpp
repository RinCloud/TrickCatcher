#include<bits/stdc++.h>
using namespace std;
int main(){
	int cnt = 0;
	int a , y;
	cin>>a>>y;
	for(int x=0;x<=a;x++){
		for(int i=0;i<=a;i++){
			int z=y-(x+i);
			if((z>=0)&&(z<=a)){
				cnt++;
			}
		}
	}
	cout<<cnt;
}

