#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int lcm = A * B / __gcd(A, B);

    cout << lcm << endl;
    
    return 0;
}