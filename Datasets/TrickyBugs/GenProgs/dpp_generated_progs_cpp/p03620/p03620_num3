#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string A, B;
    std::cin >> A >> B;
    
    int n = A.length();
    
    int ans = n + 1; // initialize with a value greater than maximum possible operations
    
    // check if strings are already equal
    if (A == B) {
        ans = 0;
    }
    
    for (int i = 0; i < n; i++) {
        // check if the ith character of B is 1
        if (B[i] == '1') {
            std::string temp = A;
            int cnt = 0; // count operations
            
            // flip every character from i to n-1
            for (int j = i; j < n; j++) {
                if (temp[j] != B[j]) {
                    temp[j] = '1' - temp[j];
                    cnt++;
                }
            }
            
            // shift and compare
            for (int k = 0; k < n; k++) {
                if (temp == B) {
                    ans = std::min(ans, cnt + k); // update minimum operations
                    break;
                }
                std::rotate(temp.begin(), temp.begin() + 1, temp.end()); // shift A by one character to the left
                cnt++;
            }
        }
    }
    
    if (ans > n) {
        ans = -1; // goal is unreachable
    }
    
    std::cout << ans << std::endl;
    
    return 0;
}