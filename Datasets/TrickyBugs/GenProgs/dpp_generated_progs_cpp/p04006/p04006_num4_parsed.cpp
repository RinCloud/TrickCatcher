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
    
    int min_time = a[0];
    for (int i = 1; i < N; i++) {
        int diff = a[i] - a[i-1];
        if (diff > x) {
            min_time += x;
        } else {
            min_time += diff;
        }
    }
    
    cout << min_time << endl;
    
    return 0;
}
