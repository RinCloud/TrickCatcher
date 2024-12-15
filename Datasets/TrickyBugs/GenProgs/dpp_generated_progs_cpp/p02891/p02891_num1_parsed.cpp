#include<iostream>
#include<string>
using namespace std;

int main()
{
    string S;
    long long K;
    cin >> S >> K;

    int n = S.length();
    int cnt = 0;
    for(int i=0; i<n-1; i++)
    {
        if(S[i] == S[i+1])
            cnt++;
    }
    
    long long ans = 0;
    ans += cnt * (K / 2);
    if(K%2 == 1)
        ans += cnt/2 + cnt%2;

    cout << ans << endl;
    
    return 0;
}