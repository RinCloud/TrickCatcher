#include <iostream>
using namespace std;

int main() {
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;
    
    int time = 0;
    
    // Calculate the time to deliver each dish
    int timeABC = (A % 10 == 0 ? A : (A / 10 + 1) * 10);
    int timeARC = (B % 10 == 0 ? B : (B / 10 + 1) * 10);
    int timeAGC = (C % 10 == 0 ? C : (C / 10 + 1) * 10);
    int timeAPC = (D % 10 == 0 ? D : (D / 10 + 1) * 10);
    int timeATC = (E % 10 == 0 ? E : (E / 10 + 1) * 10);
    
    // Calculate the total delivery time
    int totalTime = timeABC + timeARC + timeAGC + timeAPC + timeATC;
    
    // Calculate the earliest possible time for the last dish to be delivered
    while (totalTime > 0) {
        time += 10;
        totalTime -= 10;
    }
    
    cout << time << endl;
    
    return 0;
}