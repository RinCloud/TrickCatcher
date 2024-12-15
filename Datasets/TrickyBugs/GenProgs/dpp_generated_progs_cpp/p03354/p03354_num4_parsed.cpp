#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> p(N);
    for(int i=0; i<N; i++){
        cin >> p[i];
    }
    vector<pair<int,int>> pairs(M);
    for(int i=0; i<M; i++){
        cin >> pairs[i].first >> pairs[i].second;
    }
    
    vector<int> cnt(N+1, 0);
    for(int i=0; i<N; i++){
        cnt[p[i]]++;
    }
    
    int ans = 0;
    for(int i=1; i<=N; i++){
        ans += (cnt[i] == i);
    }
    
    int maxCount = ans;
    for(int i=0; i<M; i++){
        int x = pairs[i].first;
        int y = pairs[i].second;
        
        if(cnt[p[x-1]] == p[x-1]) ans--;
        if(cnt[p[y-1]] == p[y-1]) ans--;
        
        cnt[p[x-1]]--;
        cnt[p[y-1]]++;
        
        if(cnt[p[x-1]] == p[x-1]) ans++;
        if(cnt[p[y-1]] == p[y-1]) ans++;
        
        maxCount = max(maxCount, ans);
    }
    
    cout << maxCount << endl;
    
    return 0;
}