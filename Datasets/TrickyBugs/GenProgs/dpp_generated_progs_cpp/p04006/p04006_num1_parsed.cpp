#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, x;
    cin >> N >> x;
    
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    int minTime = 0;
    for (int i = 0; i < N - 1; i++) {
        if (a[i] + a[i + 1] > x) {
            int diff = a[i] + a[i + 1] - x;
            minTime += diff;
            if (a[i + 1] >= diff) {
                a[i + 1] -= diff;
            } else {
                a[i + 1] = 0;
                a[i] -= diff - a[i + 1];
            }
        }
    }
    
    cout << minTime << endl;
    
    return 0;
}