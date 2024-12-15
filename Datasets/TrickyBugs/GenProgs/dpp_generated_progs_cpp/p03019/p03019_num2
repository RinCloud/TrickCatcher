#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    
    vector<long long> b(N), l(N), u(N);
    for (int i = 0; i < N; i++) {
        cin >> b[i] >> l[i] >> u[i];
    }
    
    long long l_sum = 0, u_sum = 0;
    long long b_sum = 0;
    for (int i = 0; i < N; i++) {
        l_sum += b[i] * l[i];
        u_sum += b[i] * u[i];
        b_sum += b[i];
    }
    
    if (l_sum > u_sum) {
        cout << "0" << endl;
        return 0;
    }
    
    if (u_sum <= b_sum * X) {
        cout << "-1" << endl;
        return 0;
    }
    
    long long diff = u_sum - l_sum;
    long long min_hours = (diff + X - 1) / X;

    cout << min_hours << endl;

    return 0;
}