#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    
    vector<int> d(N);
    for(int i=0; i<N; i++) {
        cin >> d[i];
    }
    
    vector<int> q(Q);
    for(int i=0; i<Q; i++) {
        cin >> q[i];
    }
    
    // Calculate prefix sum of d
    vector<int> prefix_sum(N);
    int sum = 0;
    for(int i=0; i<N; i++) {
        sum += d[i];
        prefix_sum[i] = sum;
    }
    
    for(int i=0; i<Q; i++) {
        int idx = q[i] - 1;
        int target = D - prefix_sum[idx] + d[idx];
        
        if((target <= 0 && prefix_sum[N-1] + target <= D) || (target > 0 && prefix_sum[N-1] + target >= D)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}