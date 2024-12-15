#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, H;
    cin >> N >> H;
    
    vector<int> a(N), b(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i];
    }
    
    sort(b.begin(), b.end(), greater<int>());
    
    int attacks = 0;
    int total_damage = 0;
    
    for (int i = 0; i < N; i++) {
        if (b[i] > *max_element(a.begin(), a.end())) {
            total_damage += b[i];
            attacks++;
        }
        
        if (total_damage >= H) {
            break;
        }
    }
    
    if (total_damage < H) {
        attacks += ((H - total_damage) + *max_element(a.begin(), a.end()) - 1) / *max_element(a.begin(), a.end());
    }
    
    cout << attacks << endl;
    
    return 0;
}