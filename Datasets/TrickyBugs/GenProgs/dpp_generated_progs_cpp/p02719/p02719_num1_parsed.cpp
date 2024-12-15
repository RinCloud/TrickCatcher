#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;
    
    long long minimum = N % K;
    minimum = min(minimum, abs(minimum - K));
    
    cout << minimum << endl;
    
    return 0;
}