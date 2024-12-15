#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, x;
    cin >> N >> x;
    
    vector<int> a(N);
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    long long cnt = 0;
    
    for(int i = 1; i < N; i++) {
        if(a[i] + a[i-1] > x) {
            int eaten = a[i] + a[i-1] - x;
            cnt += eaten;
            if(a[i] >= eaten) {
                a[i] -= eaten;
            } else {
                a[i] = 0;
                a[i-1] -= eaten - a[i];
            }
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}