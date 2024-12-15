#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    
    while (Q--) {
        int A, B;
        cin >> A >> B;
        
        long long maxParticipants = min(A-1, B-1);
        cout << maxParticipants << endl;
    }
    
    return 0;
}