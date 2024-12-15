#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

#define ll long long
#define MOD 1000000007

int main(){
    int N, X, Y;
    cin >> N >> X >> Y;

    vector<pair<int, int>> balls(N);
    for(int i=0; i<N; i++){
        cin >> balls[i].first >> balls[i].second;
    }

    unordered_map<int, vector<int>> colors;
    for(int i=0; i<N; i++){
        colors[balls[i].first].push_back(balls[i].second);
    }

    ll ans = 1;

    ll factorial[N+1];
    factorial[0] = 1;
    for(int i=1; i<=N; i++){
        factorial[i] = (factorial[i-1] * i) % MOD;
    }

    for(auto color: colors){
        sort(color.second.begin(), color.second.end());
    }

    vector<ll> prefix_sum(N+1, 0);
    for(auto color: colors){
        int m = color.second.size();
        for(int i=1; i<=m; i++){
            prefix_sum[i] = prefix_sum[i-1] + color.second[i-1];
        }
        for(int i=m; i>0; i--){
            ll total_weight = prefix_sum[m] - prefix_sum[i-1];
            ll num_permutations = factorial[m] * ((total_weight <= X) ? factorial[m-i] : 1);
            ans = (ans * num_permutations) % MOD;
        }
    }

    cout << ans << endl;
    return 0;
}