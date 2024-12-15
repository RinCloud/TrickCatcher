#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    int count = 0;
    for (int i = 1; i < S.size(); i++) {
        if (S[i] != S[i-1]) {
            count++;
        }
    }

    cout << ceil(count / 2.0) << endl;

    return 0;
}