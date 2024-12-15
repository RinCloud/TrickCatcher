#include <iostream>
using namespace std;

int main() {
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;
    
    // Calculate the total delivery time for each possible order
    int order1 = A;
    int order2 = B;
    int order3 = C;
    int order4 = D;
    int order5 = E;
    
    int time1 = order1;
    int time2 = max(order1 + 10, order2);
    int time3 = max(order2 + 10, order3);
    int time4 = max(order3 + 10, order4);
    int time5 = max(order4 + 10, order5);
    
    // Find the earliest possible time for the last dish to be delivered
    int deliveryTime = max(max(max(time1, time2), max(time3, time4)), time5);
    
    cout << deliveryTime << endl;
    
    return 0;
}