#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;

    long long ans = min(N, M / 2);
    M -= ans * 2;
    ans += M / 4;

    cout << ans << endl;

    return 0;
}