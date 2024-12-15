#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    
    int sum = 0;
    for (int i = 0; i < N; i += 2) {
        sum += nums[i];
    }
    
    for (int i = 1; i < N; i += 2) {
        nums[i] = max(nums[i], nums[i-1]);
    }
    
    int maxSum = nums[N-1];
    for (int i = 0; i < N-2; i += 2) {
        maxSum = max(maxSum, sum + nums[i+2]);
        if (i > 0) {
            sum -= nums[i];
        }
        sum += nums[i+2];
    }
    
    cout << maxSum << endl;
    
    return 0;
}