#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read input values
    int N, x;
    cin >> N >> x;
    
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    // Calculate the minimum number of operations required
    long long operations = 0;
    for (int i = 1; i < N; i++) {
        if (a[i - 1] + a[i] > x) {
            int diff = (a[i - 1] + a[i]) - x;
            operations += diff;
            a[i] = max(0, a[i] - diff);
        }
    }

    // Print the result
    cout << operations << endl;
    
    return 0;
}