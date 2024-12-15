#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<long long> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    int ans = 0;
    for (int i = 0; i < N; i++) {
        while (a[i] % 2 == 0) {
            a[i] /= 2;
            ans++;
        }
    }
    
    cout << ans << endl;

    return 0;
}