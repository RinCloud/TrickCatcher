#include <iostream>
#include <vector>

using namespace std;

int main() {
    int D, G;
    cin >> D >> G;
    
    vector<int> p(D+1), c(D+1);
    
    for (int i = 1; i <= D; i++) {
        cin >> p[i] >> c[i];
    }
    
    int ans = 1e9;
    
    for (int bit = 0; bit < (1<<D); bit++) {
        int count = 0;
        int sum = 0;
        int max_idx = -1;
        
        for (int i = 1; i <= D; i++) {
            if (bit & (1<<(i-1))) {
                count += p[i];
                sum += p[i]*100*i + c[i];
            } else {
                max_idx = i;
            }
        }
        
        if (sum >= G) {
            ans = min(ans, count);
        } else {
            int s = p[max_idx]*100*max_idx;
            int remain = G - sum;
            
            if (s >= remain) {
                int need = (remain+max_idx-1)/(max_idx*100);
                count += need;
                ans = min(ans, count);
            }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}