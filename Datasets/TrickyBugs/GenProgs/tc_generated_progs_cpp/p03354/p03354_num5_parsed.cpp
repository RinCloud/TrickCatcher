// D - Equals
#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
#define all(x) (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(int)(n);++i)

int main(){
   int n, m;
   cin >> n >> m;
   vi P(n);
   for(int i = 0; i < n; ++i){
      cin >> P[i];
      P[i]--;
   }
   vvi G(n, vi());
   rep(i, m){
      int x, y;
      cin >> x >> y;
      x--, y--;
      G[x].push_back(y), G[y].push_back(x);
   }

   int ans = 0;
   vi vis(n, false);
   queue<int> q;
   rep(i, n){
      vi xx, px;
      q.push(i);
      while(!q.empty()){
         int x = q.front();
         q.pop();
         if(vis[x]) continue;
         vis[x] = true;
         xx.push_back(x), px.push_back(P[x]);
         for(int y:G[x]){
            if(vis[y]) continue;
            q.push(y);
         }
      }
      sort(all(xx)), sort(all(px));
      for(int i = 0; i < xx.size(); i++){
         if(px[lower_bound(all(px), xx[i]) - px.begin()] == xx[i]) ans++;
      }
   }
   cout << ans << endl;
}
