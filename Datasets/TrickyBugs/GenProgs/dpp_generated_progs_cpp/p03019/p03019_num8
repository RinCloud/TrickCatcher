#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    
    vector<int> b(N);
    vector<int> l(N);
    vector<int> u(N);
    
    for (int i = 0; i < N; i++) {
        cin >> b[i] >> l[i] >> u[i];
    }
    
    long long sum_c = 0;
    long long sum_b = 0;
    
    for (int i = 0; i < N; i++) {
        sum_c += l[i];
        sum_b += l[i] * b[i];
    }
    
    if (sum_c > X) {
        cout << -1 << endl;
        return 0;
    }
    
    for (int i = 0; i < N; i++) {
        int diff = u[i] - l[i];
        int max_diff = X - sum_c;
        diff = min(diff, max_diff);
        sum_c += diff;
        sum_b += diff * b[i];
    }
    
    cout << sum_b << endl;
    
    return 0;
}