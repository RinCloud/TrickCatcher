#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string S;
    cin >> S;

    int n = S.length();
    int count = 0;
    
    // Count the number of adjacent red-blue pairs
    for (int i = 0; i < n - 1; i++) {
        if (S[i] != S[i + 1]) {
            count++;
            i++; // Skip the adjacent blue cube
        }
    }

    cout << count << endl;

    return 0;
}