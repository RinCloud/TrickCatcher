#include <iostream>

using namespace std;

int main() {
    int N, A;
    cin >> N >> A;

    // Check if the required amount N can be paid using only 1-yen and 500-yen coins
    if (N % 500 <= A) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}