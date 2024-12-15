#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    
    int diff = abs(abs(x) - abs(y));
    int count = 0;
    
    // Increment button A is needed to reach the target
    while (count < diff) {
        x++;
        count++;
    }
    
    // Reverse button B is needed to reach the target
    if (x < y) {
        count += abs(y - x);
    }
    else {
        count += 2 * abs(y - x);
    }
    
    cout << count;
    
    return 0;
}