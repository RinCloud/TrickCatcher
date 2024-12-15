#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    
    int ans = 0;
    int max_elem = *max_element(x.begin(), x.end());
    
    while (max_elem > 1) {
        int p = 2;
        while (!isPrime(p) || p > max_elem) {
            p++;
        }
        ans++;
        
        for (int i = 0; i < N; i++) {
            if (x[i] % p == 0) {
                x[i] /= p;
            }
        }
        
        max_elem = *max_element(x.begin(), x.end());
    }
    
    cout << ans << endl;
    
    return 0;
}