#include <iostream>
#include <cmath>
using namespace std;
 
bool isSquare(int num) {
    int root = sqrt(num);
    return root * root == num;
}
 
int main() {
    int a, b;
    cin >> a >> b;
 
    int num = stoi(to_string(a) + to_string(b));
 
    if (isSquare(num)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
 
    return 0;
}