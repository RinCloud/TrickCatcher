#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, x, b = 1E9;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x;
        int j = 0;
        while (x % 2 == 0) {
            x /= 2;
            j += 1;
        }
        if (j < b) b = j;
        if (b == 0) break; // Change b==1 to b==0 to make sure we break only when j=0
    }
    cout << b << endl;
}
