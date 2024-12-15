#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> logs(N);
    for (int i = 0; i < N; i++) {
        cin >> logs[i];
    }
    
    sort(logs.begin(), logs.end());
    
    int left = 0;
    int right = logs[N-1];
    
    while (left < right) {
        int mid = (left + right + 1) / 2;
        
        int cuts = 0;
        for (int i = 0; i < N; i++) {
            cuts += ceil((double) logs[i] / mid) - 1;
        }
        
        if (cuts <= K) {
            right = mid - 1;
        } else {
            left = mid;
        }
    }
    
    cout << right + 1 << endl;
    
    return 0;
}