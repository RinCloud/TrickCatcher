#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    long long ans = 0;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++)  
    {
        cin >> a[i];
    }
    vector<long long> s(n + 1, 0);
    for(int i = 0; i < n; i++)
    {
        s[i + 1] = a[i] + s[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            long long sum = s[j + 1] - s[i];
            int len = j - i + 1;
            if(sum >= k * len)
                ans++;
        }
    }
    
    cout << ans << endl;
    return 0;
}