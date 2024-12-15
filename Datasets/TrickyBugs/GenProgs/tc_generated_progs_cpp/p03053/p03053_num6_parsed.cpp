#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 998244353;
vector<ll>r{-1,0,1,0};
vector<ll>l{0,-1,0,1};

int main(){
  ll h,w;
  cin >> h >> w;
  vector<vector<ll>>length(h,vector<ll>(w,-1));
  queue<pair<ll,ll>>que;
  for(int i=0; i<h; i++){
   for(int j=0; j<w; j++){
     char a;
     cin >> a;
     if(a=='#'){
       length[i][j]=0;
       que.push({i,j});
     }
   }
  }
  ll MAX=0;
  while(que.size()>0){
    ll x=que.front().first,y=que.front().second;
    que.pop();
    for(int i=0; i<4; i++){
      if(x+r[i]<0 || x+r[i]>=h || y+l[i]<0 || y+l[i]>=w) continue;
      if(length[x+r[i]][y+l[i]]!=-1) continue;
      length[x+r[i]][y+l[i]]=length[x][y]+1;
      que.push({x+r[i],y+l[i]});
      MAX=max(MAX,length[x+r[i]][y+l[i]]);
    }
  }
  
  cout << MAX << endl;
  
}