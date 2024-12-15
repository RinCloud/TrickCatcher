#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x != i) cnt++; 
    } 
    if (cnt == 2 || (cnt == 0 && n % 2 == 1))
        puts("YES");
    else
        puts("NO");
    return 0;
}