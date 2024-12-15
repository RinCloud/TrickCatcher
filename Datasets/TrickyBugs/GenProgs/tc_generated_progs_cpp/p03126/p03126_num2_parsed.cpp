#include<iostream>
using namespace std;
int c[31],n,k,m,a; // Increased the size of array c to 31
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        for(int j=0;j<k;j++){
            cin>>a;
            c[a]++;
        }
    }
    a=0;
    for(int i=1;i<=m;i++) // Changed the loop condition to iterate through all foods
    {
        if(c[i]==n) // Checking if all N people liked the food
            a++;
    }
    cout<<a;
}