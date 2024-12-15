#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, H;
    cin >> N >> H;
    
    vector<int> a(N), b(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i];
    }
    
    sort(b.begin(), b.end(), greater<int>());
    
    int attacks = 0;
    int i = 0;
    while (H > 0 && i < N && b[i] > a[i]) {
        H -= b[i];
        i++;
        attacks++;
    }
    
    if (H > 0) {
        attacks += (H + a[i] - 1) / a[i];
    }
    
    cout << attacks << endl;
    
    return 0;
}