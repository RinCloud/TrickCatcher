#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    vector<int> a(N);
    for(int i=0;i<N;i++) cin>>a[i];
    
    int ans = 0;
    int currMax = 0;
    for(int i=0;i<N;i++) {
        currMax = max(currMax, a[i]);
        if(currMax == i+1) ans++;
    }
    
    cout<< (ans == 0 ? -1 : N - ans);
    return 0;
}