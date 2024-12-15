#include <iostream>
using namespace std;

int main() {
    // Read the input values
    int A, B;
    cin >> A >> B;

    // Loop over possible prices
    for (int price = 1; price <= 10000; price++) {
        // Calculate the consumption tax at 8%
        int tax8 = price * 0.08;
        // Calculate the consumption tax at 10%
        int tax10 = price * 0.1;

        // Check if the tax amounts match the given values
        if (tax8 == A && tax10 == B) {
            cout << price << endl;
            return 0;
        }
    }

    // If no price satisfies the condition
    cout << -1 << endl;

    return 0;
}