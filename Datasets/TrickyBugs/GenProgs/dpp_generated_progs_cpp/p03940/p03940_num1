#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, E, T;
    cin >> N >> E >> T;
    
    vector<int> bears(N);
    for (int i = 0; i < N; i++) {
        cin >> bears[i];
    }
    
    sort(bears.begin(), bears.end());
    
    int time = 0;
    int num_coins = 0;
    
    for (int i = 0; i < N; i++) {
        int distance = bears[i];
        int time_to_reach = distance;
        
        if (time_to_reach <= time) {
            // Already at or after this bear's coin drop time
            // Collect the coin instantly
            num_coins++;
        } else {
            // Wait until the bear's coin drop time
            time = time_to_reach;
            num_coins++;
        }
        
        // Give candy to the bear
        time += T;
    }
    
    // Calculate time to reach the exit
    int time_to_exit = E;
    if (time_to_exit > time) {
        time = time_to_exit;
    }
    
    // Calculate total time needed to collect all coins and reach the exit
    int total_time = time + num_coins * T;
    
    cout << total_time << endl;
    
    return 0;
}