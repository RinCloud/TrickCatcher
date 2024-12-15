#include <iostream>
using namespace std;

int main() {
    // Read the input values
    long long N, X, M;
    cin >> N >> X >> M;

    long long sum = 0;
    long long current = X;
    long long count = 0;
    long long cycle_start = -1;
    long long cycle_length = 0;
    
    // Keep track of the sequence and check for cycles
    while (count < N) {
        sum += current;

        if (cycle_start == -1 && count > 0 && current == X) {
            cycle_start = count;
            cycle_length = 0;
        }

        current = (current * current) % M;

        if (cycle_start != -1) {
            cycle_length++;
            if (cycle_length == 2 && current == X) {
                // Reached the end of the cycle, break the loop
                break;
            }
        }

        count++;
    }
    
    // If there is no cycle or N is smaller than the cycle length
    if (cycle_start == -1 || N <= cycle_start) {
        cout << sum << endl;
    } else {
        // Calculate the sum by duplicating the cycle
        long long cycle_sum = 0;
        for (long long i = cycle_start; i < N; i++) {
            cycle_sum += current;
            current = (current * current) % M;
        }

        cout << sum + (N - cycle_start) / cycle_length * cycle_sum << endl;
    }
    
    return 0;
}