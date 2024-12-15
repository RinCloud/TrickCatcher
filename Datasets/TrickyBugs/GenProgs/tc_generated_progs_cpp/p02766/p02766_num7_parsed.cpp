#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y, a = 1, i = 0; // Initialize i as 0
    cin >> x >> y;
    for (i = 0; a <= x; a *= y, i++);
    cout << i << endl;
}