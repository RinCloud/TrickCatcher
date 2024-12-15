#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, V;
    cin >> N >> V;
    vector<int> x(N);
    for(int i=0; i<N; i++) {
        cin >> x[i];
    }
    vector<int> dp1(N, 0), dp2(N, 0);
    dp1[0] = V;
    dp2[N-1] = V;
    for(int i=1; i<N; i++) {
        dp1[i] = min(dp1[i-1], abs(x[i]-x[i-1]));
    }
    for(int i=N-2; i>=0; i--) {
        dp2[i] = min(dp2[i+1], abs(x[i]-x[i+1]));
    }
    for(int i=0; i<N; i++) {
        if(i == 0) {
            if(dp2[i] >= abs(x[i]-x[i+1])) {
                cout << "Possible" << endl;
            }
            else {
                cout << "Impossible" << endl;
            }
        }
        else if(i == N-1) {
            if(dp1[i] >= abs(x[i]-x[i-1])) {
                cout << "Possible" << endl;
            }
            else {
                cout << "Impossible" << endl;
            }
        }
        else {
            if(dp1[i] + dp2[i] >= abs(x[i]-x[i-1]) + abs(x[i]-x[i+1])) {
                cout << "Possible" << endl;
            }
            else {
                cout << "Impossible" << endl;
            }
        }
    }
    return 0;
}