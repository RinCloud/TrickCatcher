#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;
    
    int minTime = 123456789;
    
    // Iterate through all possible orders
    for (int i = 0; i <= 10; i++) {
        int totalTime = 0;
        if (i > 0) {
            totalTime = (i - 1) * 10;
        }
        
        // Calculate the delivery time for each dish
        totalTime += max(A, max(B, max(C, max(D, E))));
        
        minTime = min(minTime, totalTime);
    }
    
    cout << minTime << endl;
    
    return 0;
}