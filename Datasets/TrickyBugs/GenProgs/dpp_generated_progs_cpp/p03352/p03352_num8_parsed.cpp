#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int X;
    cin >> X;
    
    int largest_power = 1;
    for(int b = 2; b*b <= X; b++) {
        int p = 2;
        int power = pow(b, p);
        while(power <= X) {
            largest_power = power;
            p++;
            power = pow(b, p);
        }
    }
    
    cout << largest_power << endl;
    
    return 0;
}