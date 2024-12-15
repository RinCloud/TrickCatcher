#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    string S;
    cin >> S;
    
    int n = S.length();
    
    // initialize minimum unbalancedness to infinity
    int minUnbalancedness = INT_MAX;
    
    // iterate through all possible replacements for ? with 0 or 1
    for (int i = 0; i < (1 << n); i++) {
        string Sprime = S; // create a copy of the original string
        
        // replace ? with 0 or 1 based on the binary representation of i
        for (int j = 0; j < n; j++) {
            if (Sprime[j] == '?') {
                if ((i >> j) & 1) {
                    Sprime[j] = '1';
                } else {
                    Sprime[j] = '0';
                }
            }
        }
        
        // count the number of 0s and 1s in each substring and find the maximum difference
        int maxDifference = 0;
        int count0 = 0;
        int count1 = 0;
        
        for (int l = 0; l < n; l++) {
            for (int r = l; r < n; r++) {
                if (Sprime[r] == '0') {
                    count0++;
                } else if (Sprime[r] == '1') {
                    count1++;
                }
                
                int difference = abs(count0 - count1);
                maxDifference = max(maxDifference, difference);
            }
        }
        
        // update the minimum unbalancedness if necessary
        minUnbalancedness = min(minUnbalancedness, maxDifference);
    }
    
    // print the minimum possible unbalancedness
    cout << minUnbalancedness << endl;
    
    return 0;
}