#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read input
    string s, t;
    cin >> s >> t;

    // Calculate the size of s'
    long long size_s_prime = 1e100 / s.size();
    
    // Construct s'
    string s_prime;
    for (long long i = 0; i < size_s_prime; i++) {
        s_prime += s;
    }
    
    // Check if t is a subsequence of s'
    long long i;
    int t_index = 0;
    for (i = 0; i < s_prime.size(); i++) {
        if (s_prime[i] == t[t_index]) {
            t_index++;
        }
        
        if (t_index == t.size()) {
            break;
        }
    }
    
    // Print the result
    if (t_index == t.size()) {
        cout << i + 1;  // Since i is 0-based index, add 1 to get the position
    } else {
        cout << -1;
    }
    
    return 0;
}