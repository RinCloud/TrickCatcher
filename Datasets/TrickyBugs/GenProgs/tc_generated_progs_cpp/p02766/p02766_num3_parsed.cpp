#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y, a=1, i=0; // Initialize i to 0
    cin >> x >> y;
    for(; a <= x; a *= y, i++);
    cout << i << endl;
}
