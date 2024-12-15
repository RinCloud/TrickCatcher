#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B, C, K;
    cin >> A >> B >> C >> K;

    int max_value = max({A, B, C});
    for (int i = 0; i < K; i++) {
        max_value *= 2;
    }

    int sum = A + B + C - max({A, B, C}) + max_value;
    cout << sum << endl;

    return 0;
}