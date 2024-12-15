#include <iostream>
#include <vector>
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
            minTime += a[i + 1] - (x - a[i]);
            a[i + 1] = x - a[i];
        }
    }
    
    cout << minTime + a[N - 1] << endl;
    
    return 0;
}