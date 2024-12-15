#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read input values
    int N, x;
    cin >> N >> x;
    
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    // Find the minimum time needed
    int minTime = 0;
    for (int i = 1; i < N; i++) {
        int diff = a[i - 1] + a[i] - x;
        if (diff > 0) {
            minTime += diff;
            a[i] -= diff;
        }
    }
    
    // Output the minimum time needed
    cout << minTime << endl;
    
    return 0;
}