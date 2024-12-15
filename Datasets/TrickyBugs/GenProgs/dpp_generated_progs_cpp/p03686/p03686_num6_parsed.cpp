#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    unordered_map<int,int> map;
    vector<int> v(m+1,1);
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin>>l>>r;
        v[l-1]--;
        map[l]++;
        v[r]--;
        if(r!=m)
        {
            v[r+1]++;
        }
    }
    for(int i=1;i<=m;i++)
    {
        v[i]+=v[i-1];
    }
    int answer=0;
    for(int i=1;i<=m;i++)
    {
        if(v[i-1]==0)
        {
            answer++;
        }
        if(map[i]>0)
        {
            v[i]--;
        }
    }
    cout<<answer<<endl;
    return 0;
}