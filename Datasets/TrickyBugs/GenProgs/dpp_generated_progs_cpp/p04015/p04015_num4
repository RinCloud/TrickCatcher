#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, A;
    cin >> N >> A;
    
    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }
    
    long long ans = 0;
    for (int i = 1; i < (1 << N); i++) {
        int sum = 0, count = 0;
        for (int j = 0; j < N; j++) {
            if (i & (1 << j)) {
                sum += cards[j];
                count++;
            }
        }
        if (sum * 1.0 / count == A) {
            ans++;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}