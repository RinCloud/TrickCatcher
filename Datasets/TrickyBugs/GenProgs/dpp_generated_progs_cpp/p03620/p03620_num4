#include <iostream>
#include <string>

using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    // Check if strings A and B have the same length
    if (A.size() != B.size()) {
        cout << -1 << endl;
        return 0;
    }

    int n = A.size();
    int minOperations = n; // Maximum possible number of operations required is n

    for (int i = 0; i < n; i++) {
        // Try flipping each A_i where B_i = 1
        if (B[i] == '1') {
            string temp = A;
            int operations = 0;

            // Shift A to the right by i characters
            for (int j = 0; j < i; j++) {
                char last = temp.back();
                temp.pop_back();
                temp.insert(0, 1, last);
                operations++;
            }

            // Flip A_i
            temp[i] = (temp[i] == '0') ? '1' : '0';
            operations++;

            // Check if A is equal to B after performing operations
            if (temp == B) {
                minOperations = min(minOperations, operations);
            }

            // Shift A to the left by i characters
            for (int j = 0; j < i; j++) {
                char first = temp[0];
                temp.erase(0, 1);
                temp.push_back(first);
                operations++;
                
                // Check if A is equal to B after performing operations
                if (temp == B) {
                    minOperations = min(minOperations, operations);
                }
            }
        }
    }

    if (minOperations == n) {
        cout << -1 << endl;
    } else {
        cout << minOperations << endl;
    }

    return 0;
}