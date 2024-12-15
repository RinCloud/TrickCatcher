#include <bits/stdc++.h>
using namespace std;

long long n, a, ans, x[100], w[5000][100];

int main(){
    cin >> n >> a;

    // reset answer and w array
    ans = 0;
    memset(w, 0, sizeof(w));

    w[0][0] = 1;

    for(int i = 0; i < n; i++){
        cin >> x[i];

        for(int j = 0; j <= 50; j++){
            for(int k = 3000; k >= x[i]; k--){
                w[k][j+1] += w[k-x[i]][j];
            }
        }
    }

    for(int i = 1; i <= 50; i++){
        ans += w[i*a][i];
    }

    cout << ans << "\n";
}
