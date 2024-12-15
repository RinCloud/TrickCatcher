#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end(), greater<int>());
    
    int maxDistance = a[0];
    int totalDepth = a[0];
    for (int i = 1; i < N; i++) {
        maxDistance -= 1;
        if (maxDistance < 0) {
            cout << "Impossible" << endl;
            return 0;
        }
        maxDistance = min(maxDistance, a[i]);
        totalDepth += a[i];
    }
    
    if (totalDepth == 2 * (N - 1)) {
        cout << "Possible" << endl;
    } else {
        cout << "Impossible" << endl;
    }
    
    return 0;
}