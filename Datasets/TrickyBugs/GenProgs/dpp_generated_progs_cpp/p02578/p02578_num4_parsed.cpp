#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    
    int ans = 0;
    int max_height = 0;
    
    for(int i=0; i<n; i++) {
        if(a[i] > max_height) {
            ans += a[i] - max_height;
        } else {
            max_height = a[i];
        }
    }
    
    cout << ans << endl;
    
    return 0;
}