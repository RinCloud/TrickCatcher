#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read input
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> switches(M);
    vector<int> bulbs(M), states(M);
    
    for (int i = 0; i < M; i++) {
        int k;
        cin >> k;
        
        switches[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> switches[i][j];
        }
        
        cin >> bulbs[i];
    }
    
    for (int i = 0; i < M; i++) {
        cin >> states[i];
    }
    
    // Calculate the number of combinations of "on" and "off" states of the switches
    int result = 0;
    for (int i = 0; i < (1 << N); i++) {
        bool is_valid = true;
        for (int j = 0; j < M; j++) {
            int count = 0;
            for (int k = 0; k < switches[j].size(); k++) {
                if (i & (1 << (switches[j][k] - 1))) { // Check if the switch is "on"
                    count++;
                }
            }
            
            if (count % 2 != bulbs[j]) { // Check if the bulb is lighted
                is_valid = false;
                break;
            }
        }
        
        if (is_valid) {
            result++;
        }
    }
    
    // Output the result
    cout << result << endl;
    
    return 0;
}