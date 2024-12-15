#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, j, n, m;
    cin >> n;
    int t[n + 1];
    long long int s = 0;
    for(i = 1; i <= n; i++){
        cin >> t[i];
        s += t[i];
    }
    cin >> m;
    int p[m], x[m];
    
    int f;
    for(j = 1; j <= m; j++){
        cin >> p[j] >> x[j];
        f = x[j] - t[p[j]];
        cout << s - t[p[j]] + x[j] << endl;
    }

    return 0;
}