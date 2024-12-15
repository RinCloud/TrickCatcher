#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,a;
    cin>>N;
    vector<int> nums(N);
    for(int i=0;i<N;++i){
        cin>>a;
        nums[i] = a;
    }

    int ans = 0;
    for(int i=0;i<N;++i){
        ans+=(nums[i]-1);
    }
    
    cout << ans;
}
