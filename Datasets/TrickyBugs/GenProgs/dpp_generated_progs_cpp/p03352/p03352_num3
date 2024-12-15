#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int X;
    cin >> X;

    int largest_power = 1; // initialize with the smallest perfect power

    for (int p = 2; pow(largest_power, p) <= X; p++) {
        int b = 1;
        while (pow(b, p) <= X) {
            largest_power = pow(b, p);
            b++;
        }
    }

    cout << largest_power << endl;

    return 0;
}