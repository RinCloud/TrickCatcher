#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i] != i + 1)
        {
            cnt++;
            swap(p[i], p[p[i] - 1]);
        }
    }
    
    if (cnt <= 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}
