#include <iostream>
#include <string>

using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    int n = A.size();
    int shifts = 0;

    for (int i = 0; i < n; i++) {
        // Check if A and B are already equal
        if (A == B) {
            cout << shifts << endl;
            return 0;
        }

        // If B[i] is 0, skip this position
        if (B[i] == '0')
            continue;

        // If A[i] is 0, flip it
        if (A[i] == '0')
            A[i] = '1';
        else {
            // If A[i] is 1, we need to shift
            shifts++;
            // Shift A to the right
            string temp = A.substr(1);
            temp += A[0];
            A = temp;
        }
    }

    // Check if A and B are equal after all operations
    if (A == B)
        cout << shifts << endl;
    else
        cout << -1 << endl;

    return 0;
}