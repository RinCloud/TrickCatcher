#include <iostream>
using namespace std;

string canBuyJuiceIndefinitely(long long int A, long long int B, long long int C, long long int D) {
    if (B > A)
        return "No";
    
    if (B > C)
        return "Yes";
    
    long long int remainingStock = A % B;
    long long int maxRemainingStock = (A - D) % B;
    
    if (remainingStock > maxRemainingStock || maxRemainingStock > C)
        return "Yes";
    else
        return "No";
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        long long int A, B, C, D;
        cin >> A >> B >> C >> D;
        
        cout << canBuyJuiceIndefinitely(A, B, C, D) << endl;
    }
    
    return 0;
}