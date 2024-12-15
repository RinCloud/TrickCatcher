#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Read the number of problems
    int N;
    cin >> N;
    
    // Read the time to solve each problem
    vector<int> T(N);
    for (int i = 0; i < N; i++) {
        cin >> T[i];
    }
    
    // Read the number of drinks
    int M;
    cin >> M;
    
    // Read the problem and time for each drink
    vector<pair<int, int>> drinks(M);
    for (int i = 0; i < M; i++) {
        cin >> drinks[i].first >> drinks[i].second;
    }
    
    // Calculate the total time taken for each drink
    for (int i = 0; i < M; i++) {
        int total_time = 0;
        int problem = drinks[i].first;
        int time = drinks[i].second;
        
        // Calculate the total time without the drink
        for (int j = 0; j < N; j++) {
            if (j+1 != problem) {
                total_time += T[j];
            }
        }
        
        // Add the time with the drink for the specified problem
        total_time += time;
        
        // Print the total time
        cout << total_time << endl;
    }
    
    return 0;
}