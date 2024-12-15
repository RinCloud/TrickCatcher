#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read inputs
    int N, K;
    cin >> N >> K;
    
    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }

    // Calculate the minimum possible total distance covered by robots
    int total_distance = 0;

    // Sort the balls' coordinates
    sort(x.begin(), x.end());

    // Calculate the distance travelled by type-A robots
    for (int i = 0; i < N; i++) {
        total_distance += min(abs(0 - x[i]), abs(K - x[i]));
    }

    // Calculate the distance travelled by type-B robots
    for (int i = N - 1; i >= 0; i--) {
        total_distance += min(abs(0 - x[i]), abs(K - x[i]));
    }

    // Print the result
    cout << total_distance << endl;

    return 0;
}