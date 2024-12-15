#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> sticks(N);
    
    for (int i = 0; i < N; i++) {
        cin >> sticks[i];
    }
    
    sort(sticks.rbegin(), sticks.rend());
    
    long long maxArea = 0;
    
    for (int i = 0; i < N-3; i++) {
        if (sticks[i] == sticks[i+1]) {
            for (int j = i+2; j < N-1; j++) {
                if (sticks[j] == sticks[j+1]) {
                    maxArea = max(maxArea, (long long)sticks[i] * (long long)sticks[j]);
                    break;
                }
            }
        }
    }
    
    cout << maxArea << endl;
    
    return 0;
}