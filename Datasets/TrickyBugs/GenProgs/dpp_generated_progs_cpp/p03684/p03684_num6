#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read the number of towns
    int N;
    cin >> N;
    
    // Create vectors to store the x and y coordinates of the towns
    vector<int> x(N), y(N);
    
    // Read the coordinates of the towns
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }
    
    // Sort the x and y coordinates
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    
    // Calculate the minimum necessary amount of money
    int minX = x[N - 1] - x[0];
    int minY = y[N - 1] - y[0];
    int cost = min(minX, minY);
    
    // Print the result
    cout << cost << endl;
    
    return 0;
}