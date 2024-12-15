#include <iostream>
using namespace std;

typedef unsigned long long ull;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, x;
    int a[2000];
    int b[2000];

    cin >> N >> x;
    for(int i=0; i<N; i++) cin >> a[i];

    ull res = 0;
    for(int i=0; i<N-1; i++){
        res += a[i];
    }

    ull tot = 0;
    for(int m=0; m<N-1; m++){
        tot = m * x;
        for(int i=0; i<N; i++){
            b[i] = min(a[i], a[(i-1+N) % N]);
            tot += b[i];
        }
        for(int i=0; i<N; i++) a[i] = b[i];
        res = min(res, tot);
    }
    cout << res << endl;
    return 0;
}
