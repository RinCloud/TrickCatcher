#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    vector<int> cnt(N + 1);
    for (int i = 0; i < N; i++) {
        cnt[a[i]]++;
    }
    
    int result = 0;
    for (int i = 1; i <= N; i++) {
        if (cnt[i] == 0) {
            result++;
        }
    }
    
    int maxCnt = 0;
    for (int i = 1; i <= N; i++) {
        maxCnt = max(maxCnt, cnt[i]);
    }
    
    if (maxCnt > 1) {
        cout << -1 << endl;
    } else {
        cout << result << endl;
    }
    
    return 0;
}