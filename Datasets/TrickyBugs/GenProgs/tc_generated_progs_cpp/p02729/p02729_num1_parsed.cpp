#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a = 0; // Initialize a to 0
    cin >> n >> m;
    a += (n * n - n) / 2;
    a += (m * m - m) / 2;

    // Fix a computation error
    if((n+m) % 2 == 0 ){
        a += n * m;
    }
    
    cout << a; 
}
