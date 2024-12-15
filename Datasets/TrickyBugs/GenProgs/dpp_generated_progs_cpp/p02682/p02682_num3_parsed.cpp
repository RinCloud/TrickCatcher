#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C, K;
    cin >> A >> B >> C >> K;

    int sum = 0;
    sum += min(A, K);
    K -= min(A, K);

    sum += min(B, K);
    K -= min(B, K);

    sum -= min(C, K);
    K -= min(C, K);

    cout << sum << endl;

    return 0;
}