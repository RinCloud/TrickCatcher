#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> logs(N);
    for(int i=0; i<N; i++) {
        cin >> logs[i];
    }
    
    long long left = 0;
    long long right = *max_element(logs.begin(), logs.end());
    long long ans = 0;
    
    while(left <= right) {
        long long mid = (left + right) / 2;
        long long cnt = 0;
        
        for(int i=0; i<N; i++) {
            cnt += ceil((double)logs[i] / mid) - 1;
        }
        
        if(cnt <= K) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}