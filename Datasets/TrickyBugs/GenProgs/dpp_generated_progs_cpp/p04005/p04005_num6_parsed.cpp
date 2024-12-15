#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    long long int ans = max({A * B * C - A * (B / 2) * (C / 2), B * A * C - B * (A / 2) * (C / 2), C * A * B - C * (A / 2) * (B / 2)});

    cout << ans << endl;

    return 0;
}