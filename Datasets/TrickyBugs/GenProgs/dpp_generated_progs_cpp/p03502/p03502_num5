#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int sum = 0;
    int num = N;
    
    while (num > 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    
    if (N % sum == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}