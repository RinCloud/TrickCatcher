#include <iostream>
using namespace std;

int main() {
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

    // Calculate the earliest possible time for the last dish to be delivered
    int max_time = max(max(max(A, B), max(C, D)), E);
    
    // Calculate the time for all dishes to be delivered
    int delivery_time = 0;
    for (int i = 0; i < 5; i++) {
        if (i == 0) {
            delivery_time += (A % 10 == 0) ? A : (A + (10 - (A % 10)));
        } else {
            delivery_time += (delivery_time % 10 == 0) ? max_time : (max_time + (10 - (delivery_time % 10)));
        }
        max_time = max(max_time, delivery_time + E);
    }
    
    cout << delivery_time << endl;
    
    return 0;
}