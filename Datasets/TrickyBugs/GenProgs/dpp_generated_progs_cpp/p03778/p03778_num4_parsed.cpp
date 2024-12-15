#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int W, a, b;
    cin >> W >> a >> b;
    
    if(b > a) {
        int distance = b - a - W;
        cout << max(0, distance) << endl;
    } else {
        int distance = a - b - W;
        cout << max(0, distance) << endl;
    }
    
    return 0;
}