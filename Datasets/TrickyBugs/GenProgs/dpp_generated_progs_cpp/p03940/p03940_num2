#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, E, T;
    cin >> N >> E >> T;
    
    vector<int> bears(N);
    for (int i = 0; i < N; i++) {
        cin >> bears[i];
    }
    
    int time = 0;
    
    // Calculate the time needed to give candies to all bears
    for (int i = 0; i < N; i++) {
        int dist = bears[i] - time;
        time += dist + T;
    }
    
    // Calculate the time needed to go to the exit
    int dist = E - time;
    time += dist;
    
    cout << time << endl;
    
    return 0;
}