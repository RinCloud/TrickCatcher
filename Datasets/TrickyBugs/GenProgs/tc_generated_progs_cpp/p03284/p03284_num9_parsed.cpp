#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<min(a%b, b-a%b)<<endl;
    return 0;
}
