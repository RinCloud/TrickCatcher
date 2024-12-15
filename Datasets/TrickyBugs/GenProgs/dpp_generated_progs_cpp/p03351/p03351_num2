#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int dist_ac = abs(a - c);
    
    if (dist_ac <= d) {
        cout << "Yes" << endl;
    } else {
        int dist_ab = abs(a - b);
        int dist_bc = abs(b - c);
        
        if (dist_ab <= d && dist_bc <= d) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}