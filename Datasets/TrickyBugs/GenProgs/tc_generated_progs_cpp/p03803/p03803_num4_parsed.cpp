#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    if(n == m)
        cout << "Draw";
    else if (n == 1)
        cout << "Alice";
    else if (m == 1)
            cout << "Bob";
    else if(n > m)
        cout << "Alice";
    else if(m > n)
        cout << "Bob";
}