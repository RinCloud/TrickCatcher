#include <iostream>
#include <algorithm>
using namespace std;
const int INF = 1e9;
int main() {
    int N, K, Q;
    cin >> N >> K >> Q;
    int a[2002], sa[2002];
    for(int i = 0; i < N; i++){
        cin >> a[i];
        sa[i] = a[i];
    }
    sort(sa, sa + N);

    int ans = INF;
    for(int l = 0; l < N - Q + 1; l++){
        int r = Q + l;
        int safelen = 0, ct = 0, canremovect = 0;
      
        for(int i = 0; i < N; i++){
            if(a[i] < sa[l]){
                if(safelen >= K) ct += max(0, min(safelen - K + 1, canremovect));
                canremovect = 0;
                safelen = 0;
            }
            else if(a[i] > sa[r-1]) safelen++;
            else{
                safelen++;
                canremovect++;
            }
        }
        
        if(safelen >= K) ct += max(0, min(safelen - K + 1, canremovect));
        if(ct >= Q) ans = min(ans, sa[r - 1] - sa[l]);
    }
    
    cout << ans << endl;
    return 0;
}
