#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n, k;
    cin >> n >> k >> s;

    int f = 0;
    int p = 0;

    for (int i = 0; i < k; ++i) {
        bool c = (s[p] == 'A') ^ f;
        if (!c) {
            f ^= 1;
        }
        p = (p + 1) % n;
    }

    string result(n, 'B');
    bool c = (s[p] == 'A') ^ f;
    result[p] = (c ? 'A' : 'B');
    p = (p + 1) % n;
    
    for (int i = 0; i < n; ++i) {
        bool c = (s[p] == 'A') ^ f;
        result[p] = (c ? 'A' : 'B');
        p = (p + 1) % n;
    }
    
    cout << result << endl;

    return 0;
}
