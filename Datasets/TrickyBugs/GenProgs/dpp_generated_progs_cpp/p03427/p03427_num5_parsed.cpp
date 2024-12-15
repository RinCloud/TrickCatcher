#include <iostream>
using namespace std;

int main() {
    unsigned long long int N;
    cin >> N;

    int sum = 0;
    while (N) {
        sum += N % 10;
        N /= 10;
    }

    cout << sum << endl;

    return 0;
}