#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double A, B;
    cin >> A >> B;
    
    long long result = static_cast<long long>(A * B);
    cout << result << endl;
    
    return 0;
}