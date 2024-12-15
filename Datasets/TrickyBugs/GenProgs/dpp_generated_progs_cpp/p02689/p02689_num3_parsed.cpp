#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> H(N);
    for (int i = 0; i < N; i++)
    {
        cin >> H[i];
    }

    vector<vector<int>> adj(N);
    for (int i = 0; i < M; i++)
    {
        int A, B;
        cin >> A >> B;
        adj[A - 1].push_back(B - 1);
    }

    int ans = 0;
    for (int i = 0; i < N; i++)
    {
        bool good = true;
        for (int j : adj[i])
        {
            if (H[i] <= H[j])
            {
                good = false;
                break;
            }
        }
        if (good)
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}