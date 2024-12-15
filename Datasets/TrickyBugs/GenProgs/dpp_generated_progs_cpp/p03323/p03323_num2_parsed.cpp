#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    // If the absolute difference between A and B is greater than 1,
    // it means that the same person would need to take adjacent pieces of cake,
    // which is not allowed according to the note.
    if (abs(A - B) > 1) {
        cout << ":(\n";
    } else {
        cout << "Yay!\n";
    }

    return 0;
}