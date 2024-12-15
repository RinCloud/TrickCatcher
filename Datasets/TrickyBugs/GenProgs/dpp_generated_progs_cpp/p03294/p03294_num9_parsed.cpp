#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    // Sort the numbers in descending order
    sort(a.begin(), a.end(), greater<int>());
    
    // Find the maximum value of f
    int max_f = 0;
    for (int m = 0; m < a[0]; m++) {
        int f = 0;
        for (int i = 0; i < N; i++) {
            f += m % a[i];
        }
        max_f = max(max_f, f);
    }
    
    cout << max_f << endl;
    
    return 0;
}