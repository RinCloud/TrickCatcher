#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    
    int count = 0;
    while (a % 2 == 0 && b % 2 == 0 && c % 2 == 0) {
        long long na = b / 2 + c / 2;
        long long nb = a / 2 + c / 2;
        long long nc = a / 2 + b / 2;
        
        a = na;
        b = nb;
        c = nc;
        
        count++;
        
        if (a == b && b == c && c == a) {
            count = -1;
            break;
        }
    }
    
    cout << count << endl;
    
    return 0;
}