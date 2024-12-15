#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int digit1 = N / 1000;  // first digit
    int digit2 = (N / 100) % 10;  // second digit
    int digit3 = (N / 10) % 10;  // third digit
    int digit4 = N % 10;  // fourth digit
    
    if (digit1 == digit2 && digit2 == digit3) {
        cout << "Yes";
    } else if (digit2 == digit3 && digit3 == digit4) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}