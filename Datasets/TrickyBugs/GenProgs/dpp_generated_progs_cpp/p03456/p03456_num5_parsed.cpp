#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool isConcatenationSquare(int a, int b) {
    string concat = to_string(a) + to_string(b);
    int num = stoi(concat);
    int sqrtNum = sqrt(num);
    
    return sqrtNum * sqrtNum == num;
}

int main() {
    int a, b;
    cin >> a >> b;
    
    if (isConcatenationSquare(a, b)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    
    return 0;
}