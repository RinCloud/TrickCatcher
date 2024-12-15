#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        if (p[i] != i + 1) cnt++;
    }
    if (cnt == 2 || (cnt == 0 && p[0] != 1 && p[n - 1] != n))
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}