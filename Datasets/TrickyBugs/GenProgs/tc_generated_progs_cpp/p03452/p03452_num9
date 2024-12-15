#include <bits/stdc++.h>
using namespace std;

constexpr int maxn = 100000 + 10;

vector<tuple<int, int, int>> edges;
vector<pair<int, int>> vec[maxn] = {};
int poz[maxn] = {};
int in_deg[maxn] = {};

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0, x, y, z; i < m; ++i){
        cin >> x >> y >> z;
        edges.emplace_back(x, y, z);
        vec[x].emplace_back(y, z);
        ++in_deg[y];
    }
    queue<int> de_q;
    for(int i =0; i < n; ++i)
        if(in_deg[i] == 0)
            de_q.push(i);

    while(!de_q.empty()){
        int cur = de_q.front();
        de_q.pop();
        for(auto next : vec[cur]){
            poz[next.first] = poz[cur] + next.second;
            if(--in_deg[next.first] == 0)
                de_q.push(next.first);
        }
    }
    bool good = true;
    for(auto& x : edges)
        good = (good && poz[get<0>(x)] + get<2>(x) == poz[get<1>(x)]);
    cout << (good ? "Yes" : "No");
    return 0;
}