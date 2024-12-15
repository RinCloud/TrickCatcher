#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> h(N);
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }
    
    int operations = 0;
    for (int i = 1; i < N; i++) {
        int diff = h[i - 1] - h[i];
        if (diff > 0) {
            operations += diff;
            h[i] += diff;
        }
    }
    
    cout << operations << endl;
    
    return 0;
}