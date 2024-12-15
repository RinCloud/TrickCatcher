#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, max=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] > max) max = a[i];
    }
    
    int count = 0;
    for(int i=0; i<n; i++){
        if(a[i] == max) count++;
    }
    
    cout<<count<<endl;
    return 0;
}
