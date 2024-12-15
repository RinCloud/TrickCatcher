#include <iostream>
using namespace std;

int main() {
    int N, A;
    cin >> N >> A;

    // check if the amount can be paid using only 1-yen and 500-yen coins
    if (N % 500 <= A) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}