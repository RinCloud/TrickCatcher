#include <vector>
#include <iostream>
using namespace std;
int main() {
    int n, a, b; cin >> n >> a >> b;
    if ((long long)a * b < n || a + b > n + 1) { cout << -1 << endl; return 0; }
    vector<int> ans;
    for (int i = 0; i < b; i++) ans.push_back(b-i);
    int x = b;
    if (a == 1) {
        for (int i = 0; i < n-b; i++) ans.push_back(x+1+i);
    } else {
        int y = x + 1;
        for (int i = 0; i < a-1; i++) {
            int diff = (n-b) % (a-1);
            if (i == diff - 1) {
                y += ((n-b) / (a-1)) + 1;
            } else {
                y += ((n-b) / (a-1));
            }
            for (int z = y; z > x; z--) ans.push_back(z);
            x = y;
        }
        for (int i = 0; i < n-b-(a-1)*((n-b)/(a-1)); i++) ans.push_back(x+1+i);
    }
    for (int i : ans) cout << i << ' '; cout << endl;
}
