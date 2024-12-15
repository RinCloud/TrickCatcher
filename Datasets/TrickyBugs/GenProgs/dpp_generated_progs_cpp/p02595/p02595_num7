#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    int count = 0;
    for (int i = 0; i < N; i++) {
        int X, Y;
        cin >> X >> Y;

        double distance = sqrt(pow(X, 2) + pow(Y, 2));
        if (distance <= D) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}