#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> bricks(N);
    for (int i = 0; i < N; i++) {
        cin >> bricks[i];
    }
    
    vector<int> freq(N + 1, 0);
    for (int i = 0; i < N; i++) {
        if (bricks[i] > N - 1) {
            cout << -1 << endl;
            return 0;
        }
        freq[bricks[i]]++;
    }
    
    int cnt = 0;
    int missing = 0;
    for (int i = 1; i <= N; i++) {
        if (freq[i] == 0) {
            missing++;
        } else if (freq[i] > 1) {
            cnt += freq[i] - 1;
        }
        if (missing > freq[i]) {
            cout << -1 << endl;
            return 0;
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}