#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> m(N);
    for (int i = 0; i < N; i++) {
        cin >> m[i];
    }

    int count = N;
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += m[i];
        if (sum > X) {
            count--;
            break;
        }
    }

    int remaining = X - sum;
    count += remaining / m[0];

    cout << count << endl;

    return 0;
}