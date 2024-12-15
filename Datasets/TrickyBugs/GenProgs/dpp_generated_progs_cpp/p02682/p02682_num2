#include <iostream>
using namespace std;

int main() {
    int A, B, C, K;
    cin >> A >> B >> C >> K;
    
    int sum = 0;
    
    if ( A >= K ) {
        sum += K;
    }
    else {
        sum += A;
        K -= A;
        
        if ( B >= K ) {
            K = 0;
        }
        else {
            K -= B;
        }
        
        sum -= K;
    }
    
    cout << sum << endl;
    
    return 0;
}