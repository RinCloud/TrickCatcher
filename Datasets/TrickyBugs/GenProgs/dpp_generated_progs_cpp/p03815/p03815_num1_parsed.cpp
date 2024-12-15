#include <iostream>
using namespace std;

int main() {
    long long x;
    cin >> x;
    
    // Find the number of times the die needs to be rotated
    // to achieve the minimum score of at least x points
    
    long long min_rotations = (x + 6) / 7;
    
    cout << min_rotations << endl;
    
    return 0;
}