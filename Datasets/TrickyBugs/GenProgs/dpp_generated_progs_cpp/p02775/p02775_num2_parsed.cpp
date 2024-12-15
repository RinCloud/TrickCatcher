#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string N;
    cin >> N;
    
    int len = N.length(); // length of N
    
    // Check if N is equal to 10^k
    if (N[0] == '1') {
        bool allNines = true;
        for (int i = 1; i < len; i++) {
            if (N[i] != '9') {
                allNines = false;
                break;
            }
        }
        
        if (allNines) {
            cout << len - 1 << endl;
        } else {
            cout << len << endl;
        }
    } else {
        int count = len-1;
        cout << count << endl;
    }
    
    return 0;
}