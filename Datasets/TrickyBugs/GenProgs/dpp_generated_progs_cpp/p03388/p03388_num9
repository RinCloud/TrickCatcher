#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    
    while (Q--) {
        int A, B;
        cin >> A >> B;
        
        long long maxParticipants = (long long) min(A, B) - 1;
        maxParticipants += (long long) sqrt((long double) A*B) - 1;
        
        cout << maxParticipants << endl;
    }
    
    return 0;
}