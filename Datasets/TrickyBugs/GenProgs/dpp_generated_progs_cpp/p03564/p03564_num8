#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int power = log2(N) + 1;
    int min_value = pow(2, power);

    int remaining_operations = N - power;
    min_value += remaining_operations * K;

    cout << min_value << endl;

    return 0;
}