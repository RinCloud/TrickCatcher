#include <iostream>
using namespace std;

int main() {
 int H, W;
 cin >> H >> W;
 char s[55][55];
 for(int i=0; i<H; i++)
    for(int j=0; j<W; j++)
        cin >> s[i][j];
        
 int cnt = 0;
 for(int i = 0; i < H; i++){
     for(int j = 0; j < W; j++){
         if(s[i][j] == '#'){
             if(((i-1 < 0) || s[i-1][j] == '.') && ((i+1 >= H) || s[i+1][j] == '.') && ((j-1 < 0) || s[i][j-1] == '.') && ((j+1 >= W) || s[i][j+1] == '.')){
                 cnt++;
             }
         }
     }
 }
 if(cnt == 0) cout <<"Yes" << endl;
 else cout <<"No" << endl;
 return 0;
}