#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> x(N);
    vector<int> y(N);
    
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }
    
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    
    int minX = x[N - 1] - x[0];
    int minY = y[N - 1] - y[0];
    
    int cost = min(minX, minY);
    
    cout << cost << endl;
    
    return 0;
}