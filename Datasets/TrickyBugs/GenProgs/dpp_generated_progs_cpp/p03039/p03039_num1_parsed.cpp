#include <iostream>
#define MOD 1000000007
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    long long ans = 0;

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            for(int k=i; k<N; k++) {
                for(int l=0; l<M; l++) {
                    int diff = abs(i-k) + abs(j-l);

                    if(diff > 0 && diff <= K) {
                        ans += diff * (N-i) * (M-j) * (N-k) * (M-l);
                        ans %= MOD;
                    }
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}