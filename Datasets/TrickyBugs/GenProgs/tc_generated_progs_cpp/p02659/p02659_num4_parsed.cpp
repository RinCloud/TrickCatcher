#include<iostream>
#include<cmath>
using namespace std;
long A;string B;
int main()
{
    cin>>A>>B;
    int T=100*(B[0]-'0')+10*(B[1]-'0')+B[3]-'0';
    cout<<A*T/100<<endl;
}