#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read input
    int N, x;
    cin >> N >> x;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }
    
    // Process candies
    long long operations = 0;
    for (int i = 1; i < N; ++i) {
        int total = a[i] + a[i-1];
        if (total > x) {
            int diff = total - x;
            operations += diff;
            
            // Update neighboring boxes
            if (a[i] >= diff) {
                a[i] -= diff;
            } else {
                a[i] = 0;
                a[i-1] -= diff - a[i];
            }
        }
    }
    
    // Print result
    cout << operations << endl;
    
    return 0;
}