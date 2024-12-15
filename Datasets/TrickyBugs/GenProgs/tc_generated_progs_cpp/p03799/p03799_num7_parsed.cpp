#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, a, cnt;
    cin >> n >> a;
    
    if (a >= 2 * n)
        cnt = n;
    else
    {
        long long b = (n - (2 * a)) / 2;
        cnt = a + b;
    }

    cout << cnt << endl;

    return 0;
}
