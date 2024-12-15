#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countTriangleTriplets(vector<int>& sticks) {
    int n = sticks.size();
    sort(sticks.begin(), sticks.end());
    int count = 0;
    
    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                if (sticks[i] != sticks[j] && sticks[j] != sticks[k] && sticks[k] != sticks[i] && sticks[i] + sticks[j] > sticks[k]) {
                    count++;
                }
            }
        }
    }
    
    return count;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> sticks(N);
    for (int i = 0; i < N; i++) {
        cin >> sticks[i];
    }
    
    int result = countTriangleTriplets(sticks);
    cout << result << endl;
    
    return 0;
}