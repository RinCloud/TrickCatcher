#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, X, D;
    cin >> N >> X >> D;
    
    vector<int> m(N+1);
    vector<int> p(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> m[i] >> p[i];
    }
    
    vector<int> c(N+1);
    c[1] = X / m[1];
    for (int i = 2; i <= N; i++) {
        c[i] = min(c[p[i]], c[p[i]] + D);
    }
    
    int result = 0;
    for (int i = 1; i <= N; i++) {
        result += c[i];
    }
    
    cout << result << endl;
    
    return 0;
}