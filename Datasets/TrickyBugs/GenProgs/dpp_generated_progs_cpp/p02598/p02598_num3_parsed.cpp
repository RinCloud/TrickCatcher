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
    
    int left = 1;
    int right = *max_element(logs.begin(), logs.end());
    int result = right;
    
    while (left <= right) {
        int mid = (left + right) / 2;
        int count = 0;
        
        for (int i = 0; i < N; i++) {
            count += ceil((double)logs[i] / mid) - 1;
        }
        
        if (count > K) {
            left = mid + 1;
        } else {
            result = mid;
            right = mid - 1;
        }
    }
    
    cout << result << endl;
    
    return 0;
}