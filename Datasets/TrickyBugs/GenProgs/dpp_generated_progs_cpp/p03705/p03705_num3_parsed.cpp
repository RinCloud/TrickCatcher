#include <iostream>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    if (A == B) {
        cout << 1 << endl;
    } else if (N == 1) {
        cout << 0 << endl;
    } else {
        int min_sum = A * (N - 1) + B;
        int max_sum = A + B * (N - 1);
        cout << max_sum - min_sum + 1 << endl;
    }

    return 0;
}