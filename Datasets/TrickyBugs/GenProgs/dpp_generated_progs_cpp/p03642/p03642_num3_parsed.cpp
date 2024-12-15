#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to flip the cards
void flipCards(vector<bool>& cards, int start, int end) {
    for (int i = start; i <= end; i++) {
        cards[i] = !cards[i];
    }
}

int main() {
    // Read the input
    int N;
    cin >> N;
    vector<int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }
    
    // Initialize the cards vector
    int max_num = x[N-1];
    vector<bool> cards(max_num+1, false);
    for (int i = 0; i < N; i++) {
        cards[x[i]] = true;
    }
    
    // Perform the operations
    int operations = 0;
    int min_prime = 3;
    while (min_prime <= max_num) {
        if (isPrime(min_prime)) {
            for (int i = 0; i <= max_num - min_prime + 1; i++) {
                bool flip = true;
                for (int j = i; j < i + min_prime; j++) {
                    if (cards[j]) {
                        flip = false;
                        break;
                    }
                }
                if (flip) {
                    flipCards(cards, i, i + min_prime - 1);
                    operations++;
                }
            }
        }
        min_prime++;
    }
    
    // Count the remaining face up cards
    int remaining = 0;
    for (int i = 1; i <= max_num; i++) {
        if (cards[i]) {
            remaining++;
        }
    }
    
    // Calculate the minimum number of operations required
    int min_operations = operations + ceil(remaining / 2.0);
    
    // Print the result
    cout << min_operations << endl;
    
    return 0;
}