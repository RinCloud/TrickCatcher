#include <vector>
#include <iostream>
using namespace std;
int main() {
    int n, a, b; cin >> n >> a >> b;
    if ((long long)a * b < n || a + b > n + 1) { cout << -1 << endl; return 0; }
    vector<int> ans;
    for (int i = 0; i < b; i++) ans.push_back(b - i);
    int x = b;
    for (int i = 0; i < a - 1; i++) {
        int y = x + (n - b) / (a - 1);
        if ((n - b) % (a - 1) > i) y++;
        for (int z = y-1; z >= x; z--) ans.push_back(z);
        x = y-1;
    }
    for (int i : ans) cout << i << ' ';
    cout << endl;
    return 0;
}