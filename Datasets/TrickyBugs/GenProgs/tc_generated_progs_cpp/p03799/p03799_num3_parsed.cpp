#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N, M;
    cin >> N >> M;

    if (N >= M)
    {
        cout << M / 2 << endl;
    }
    else
    {
        long long S_pieces = N;

        // calculate the maximum number of 'Scc' groups
        M -= (2 * N);
        S_pieces += M / 4;

        cout << S_pieces << endl;
    }

    return 0;
}
