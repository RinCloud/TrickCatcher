#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;
    vector < pair<long long, int>>V;
    long long ans = 0;
    for (int i = 0; i < N; i++)
    {
        long long A;
        cin >> A;
        V.push_back({ A,1 });
    }
    for (int i = 0; i < M; i++)
    {
        int B;
        long long C;
        cin >> B >> C;
        V.push_back({ C,B });
    }
    sort(V.rbegin(), V.rend());
    for (int i = 0; i < V.size(); i++)
    {
        long long C = min((long long)V[i].second, N);
        N -= C;
        ans += C*V[i].first;
    }
    cout << ans << endl;
    return 0;
}