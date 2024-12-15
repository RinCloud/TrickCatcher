#include <iostream>
using namespace std;
 
int main() {
    int a, b, c;
    cin >> a >> b >> c;
 
    int count = 0;
    while (a % 2 == 0 && b % 2 == 0 && c % 2 == 0) {
        int half_a = a / 2;
        int half_b = b / 2;
        int half_c = c / 2;
 
        a = half_b + half_c;
        b = half_a + half_c;
        c = half_a + half_b;
 
        count++;
 
        if (a == b && b == c) {
            cout << -1 << endl;
            return 0;
        }
    }
 
    cout << count << endl;
    return 0;
}