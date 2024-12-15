#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int price = -1;
    for (int i = 1; i <= 1000; i++) {
        int tax8 = floor(i * 0.08);
        int tax10 = floor(i * 0.1);

        if (tax8 == A && tax10 == B) {
            price = i;
            break;
        }
    }

    cout << price << endl;

    return 0;
}