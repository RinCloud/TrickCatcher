#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

int n;
vector<int> G[N];
int DP[N][2], dp[N][2];
int ans_A, ans_B;

void dfs(int v, int p = 0){
    if ((int)G[v].size() == 1 && v != 1){
        DP[v][0] = 1;
        DP[v][1] = 0;
        return;
    }
    int cnt = 0;
    for (int u : G[v]){
        if (u == p) continue;
        dfs(u, v);
        cnt++;
        DP[v][0] += min(DP[u][0], DP[u][1]);
    }
    if (cnt > 1) {
        int best = INT_MAX, second_best = INT_MAX;
        for (int u : G[v]){
            if (u == p) continue;
            int cur = DP[v][0] - min(DP[u][0], DP[u][1]) + DP[u][0];
            if (cur < best){
                second_best = best;
                best = cur;
            }
            else if (cur < second_best)
                second_best = cur;
        }
        DP[v][1] = second_best;
        int tot_dp = DP[v][0] + DP[v][1] + 1;
        if (tot_dp <= ans_A && DP[v][1] <= ans_B){
            ans_A = tot_dp;
            ans_B = DP[v][1];
        }
    }
}

void calc_dp(int v, int p = 0){
    if ((int)G[v].size() == 1 && v != 1){
        dp[v][0] = 0;
        dp[v][1] = -1;
        return;
    }
    vector<int> subtrees;
    int sum = 0;
    for (int u : G[v]){
        if (u == p) continue;
        calc_dp(u, v);
        sum += dp[u][0];
        subtrees.push_back(dp[u][1] + 1);
    }
    if (subtrees.size() == 0){
        dp[v][0] = 0;
        dp[v][1] = 0;
        return;
    }
    sort(subtrees.begin(), subtrees.end());
    int second_best = INT_MAX;
    for (int i = 0; i + 1 < subtrees.size(); ++i){
        int cnt = subtrees.size() - 1 - i;
        int cur = subtrees[i] + cnt/2 + cnt%2;
        second_best = min(second_best, cur);
    }
    int tot_dp = sum + second_best;
    if (tot_dp <= ans_A){
        ans_A = tot_dp;
        ans_B = second_best;
    }
    dp[v][0] = sum + second_best;
    dp[v][1] = subtrees.back();
}

pair<int, int> solve(){
    ans_A = INT_MAX;
    ans_B = INT_MAX;
    dfs(1);
    calc_dp(1);
    return make_pair(ans_A, ans_B);
}

int main(){
    cin >> n;
    for (int i = 0; i < n - 1; ++i){
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    pair<int, int> ans = solve();
    cout << ans.first << " " << ans.second << "\n";

    return 0;
}