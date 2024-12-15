#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, a = 1, i = 0;
    cin >> x >> y;
    while (a <= x) {
        a *= y;
        i++;
    }
    cout << i << endl;
}