#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    
    if (a == 'H' && b == 'H') {
        cout << "H" << endl;
    } else {
        cout << "D" << endl;
    }
    
    return 0;
}