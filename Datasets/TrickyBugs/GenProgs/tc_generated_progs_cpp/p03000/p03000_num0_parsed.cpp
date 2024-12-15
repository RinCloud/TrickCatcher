#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,a[104],t=0;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    cin>>a[i];
    int count = 0; //initialize a count variable to count the bounces
    for(int i=0;i<=n;i++) //change the loop condition to i<=n for N+1 bounces
    {
        t+=a[i];
        if(t<=x) //change the condition to t<=x to count bounces at most x
        {
            count++; //increment the count when the coordinate is at most X
        }
    }
    cout<<count;
}