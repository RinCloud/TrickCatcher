#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    string colors;
    cin >> colors;
    
    vector<int> count(N+1, 0);
    
    // Count the number of white stones to the right of each position
    for (int i = N-1; i >= 0; i--) {
        count[i] = count[i+1] + (colors[i] == 'W');
    }
    
    // Count the number of operations needed to remove the white stones
    int operations = 0;
    for (int i = 0; i < N; i++) {
        if (colors[i] == 'R') {
            operations += count[i+1];
        }
    }
    
    cout << operations << endl;
    
    return 0;
}