#include <iostream>
using namespace std;
int main()
{
    long long int x,y,cnt;
    cin>>x>>y;
    cnt = 0;
    while(x<=y)
    {
        x=x*2;
        cnt++;
    }
    cout<<cnt<<endl;
}