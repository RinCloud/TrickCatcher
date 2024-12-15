#include <iostream>
#define MAXN 500
#define for_neighbors(BLK) for(int d=0; d<4; d++){int ii=i+(d==0)-(d==1), jj=j+(d==2)-(d==3); BLK}
using namespace std;
int table[MAXN+2][MAXN+2] = {0};
bool seat[MAXN+2][MAXN+2] = {0};
int N;
void update(int i, int j){
	if(min(i, j) < 0 || max(i, j) >= N)
		return; 
	int n = table[i][j];
	for_neighbors(
		n = min(n, table[ii][jj]+!seat[ii][jj]);
	)
	if(n == table[i][j])
		return ;
	table[i][j] = n;
	for_neighbors(
		update(ii, jj);
	)
}

int main(){
	int P, ans = 0;
	cin >> N;
	for(int i=0; i<N; i++)
		for(int j=0; j<N; j++)
			table[i][j] = min(min(i, N-1-i), min(j, N-1-j));

	for(int p=0; p<N*N; p++){
		cin >> P; P--;
		int i = P/N, j = P%N;
		ans += table[i][j];
		seat[i][j] = 1;
		for_neighbors(
			update(ii, jj);
		)
	}
	cout << ans << endl;
}
