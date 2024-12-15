#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int countOperations(string A, string B) {
    int n = A.size();
    
    // Check if A and B are already equal
    if (A == B) {
        return 0;
    }
    
    // Check if there are any 1s in B
    if (B.find('1') == string::npos) {
        return -1;
    }
    
    // Initialize variables
    int minOperations = n;
    
    // Try all possible starting positions
    for (int i = 0; i < n; i++) {
        int operations = 0;
        string tempA = A;
        
        // Perform operations to make A and B equal
        for (int j = 0; j < n; j++) {
            // Check if A and B are already equal
            if (tempA == B) {
                minOperations = min(minOperations, operations);
                break;
            }
            
            // Flip A_i if B_i = 1
            if (B[j] == '1') {
                tempA[j] = (tempA[j] == '0') ? '1' : '0';
                operations++;
            }
            
            // Shift A to the left
            rotate(tempA.begin(), tempA.begin() + 1, tempA.end());
            operations++;
        }
        
        // Shift A to the right
        rotate(A.begin(), A.begin() + 1, A.end());
    }
    
    // Check if the goal is unreachable
    if (minOperations == n) {
        return -1;
    }
    
    return minOperations;
}

int main() {
    string A, B;
    cin >> A >> B;
    
    int result = countOperations(A, B);
    cout << result << endl;
    
    return 0;
}