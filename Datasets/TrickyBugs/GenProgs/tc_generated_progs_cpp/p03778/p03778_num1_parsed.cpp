#include<bits/stdc++.h>
using namespace std;
int main(){
    int W, a, b;
    cin >> W >> a >> b;
    int R;
    if (a <= b && b <= a + W) {
        R = 0;
    } else if (b + W <= a) {
        R = a - b - W;
    } else {
        R = b - (a + W);
    }

    cout << R;

    return 0;
}
