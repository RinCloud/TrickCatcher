#include <iostream>
using namespace std;

int main() {
 char c[55][55]; 
 int h,w,cnt = 0; // Initialize cnt to 0
 cin >> h >> w;
 for(int i= 0;i<h;i++)for(int j=0;j<w;j++)cin >> c[i][j];
 for(int i =1;i<h-1;i++){ // Iterate until h-1
 	for(int j =1;j<w-1;j++){ // Iterate until w-1
 		if(c[i][j] == '#' && c[i][j-1] !='#'&& c[i-1][j] !='#' && c[i][j+1] !='#' && c[i+1][j] !='#' )cnt++;
 	}
 }
 if(cnt == 0) cout <<"Yes" << endl;
 else cout <<"No" << endl;
}
