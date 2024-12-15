#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int count = 0;
    while (N > 0) {
        N /= K;
        count++;
    }

    cout << count << endl;

    return 0;
}