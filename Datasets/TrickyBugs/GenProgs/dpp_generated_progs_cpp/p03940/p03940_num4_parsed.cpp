#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, E, T;
    cin >> N >> E >> T;
    
    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    
    // calculate the minimum time to collect all coins and reach the exit
    int time = 0;
    for (int i = 0; i < N; i++) {
        int distance = abs(x[i] - x[i-1]);
        int coins = (distance + T - 1) / T; // calculate the number of coins at the bear's position
        time += coins * T; // time to collect all coins at the bear's position
    }
    
    // add additional time to reach the exit
    int distanceToExit = abs(E - x[N-1]);
    time += distanceToExit;
    
    cout << time << endl;
    
    return 0;
}