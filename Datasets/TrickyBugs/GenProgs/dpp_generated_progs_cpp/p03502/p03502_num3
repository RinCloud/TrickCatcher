#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int sum = 0;
    int temp = N;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    
    if (N % sum == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}