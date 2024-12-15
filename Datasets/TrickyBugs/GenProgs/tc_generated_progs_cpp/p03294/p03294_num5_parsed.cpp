#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, ans = 0, a;
    cin >> N;
    for(int i = 0; i < N; ++i){
        cin >> a;
        ans += a - 1;
    }
    cout << ans;
}
