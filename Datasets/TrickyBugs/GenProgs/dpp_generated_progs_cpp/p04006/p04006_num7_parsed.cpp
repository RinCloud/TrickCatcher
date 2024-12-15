#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, x;
    cin >> N >> x;
    
    vector<int> a(N);
    for(int i=0; i<N; i++) {
        cin >> a[i];
    }
    
    int minTime = a[0];
    for(int i=1; i<N; i++) {
        minTime = min(minTime + x, a[i]);
    }
    
    cout << minTime << endl;
    
    return 0;
}