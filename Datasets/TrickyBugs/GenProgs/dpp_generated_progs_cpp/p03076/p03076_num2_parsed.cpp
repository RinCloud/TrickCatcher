#include <iostream>
using namespace std;

int main() {
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;
    
    int time = 0;
    
    // Order ABC Don (rice bowl) at time 0
    time += A;
    
    // Order ARC Curry at time 10
    if (time % 10 != 0) {
        time += (10 - time % 10);
    }
    time += B;
    
    // Order AGC Pasta at time 20
    if (time % 10 != 0) {
        time += (10 - time % 10);
    }
    time += C;
    
    // Order APC Ramen at time 30
    if (time % 10 != 0) {
        time += (10 - time % 10);
    }
    time += D;
    
    // Order ATC Hanbagu (hamburger patty) at time 40
    if (time % 10 != 0) {
        time += (10 - time % 10);
    }
    time += E;
    
    cout << time << endl;
    
    return 0;
}