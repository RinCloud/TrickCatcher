#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        x -= a[i];
    }
    sort(a, a + n);
    cout << n + (x / a[0]) << endl;
    
    return 0;
}
