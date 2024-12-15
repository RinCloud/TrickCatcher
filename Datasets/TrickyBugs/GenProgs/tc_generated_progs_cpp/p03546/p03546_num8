#include <bits/stdc++.h>
using namespace std;
int main(){
	int h,w;
	cin >> h >> w;
	int g[10][10];
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cin >> g[i][j];
		}
	}
	int a[h][w];
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin >> a[i][j];
		}
	}

	for(int k=0;k<10;k++){
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				g[i][j]=min(g[i][j], g[i][k]+g[k][j]);
			}
		}
	}
	int sum=0;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			if(a[i][j]!=-1){
				sum+=g[a[i][j]][1];
			}
		}
	}
	cout << sum << endl;
	return 0;
}