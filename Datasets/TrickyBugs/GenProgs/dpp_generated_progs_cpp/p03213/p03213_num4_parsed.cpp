#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the prime factors of n
vector<int> prime_factors(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

// Function to calculate the number of divisors of n!
int count_divisors(int n) {
    vector<int> factors;
    for (int i = 1; i <= n; i++) {
        vector<int> curr_factors = prime_factors(i);
        factors.insert(factors.end(), curr_factors.begin(), curr_factors.end());
    }
    
    int count = 0;
    int prev = 0;
    int exp = 0;
    
    for (int i = 0; i < factors.size(); i++) {
        if (i == 0 || factors[i] != prev) {
            count += exp * (exp + 1) / 2;
            prev = factors[i];
            exp = 1;
        } else {
            exp++;
        }
    }
    
    count += exp * (exp + 1) / 2;
    
    return count;
}

int main() {
    // Read the input integer
    int N;
    cin >> N;
    
    // Calculate the number of Shichi-Go numbers
    int shichi_go_count = count_divisors(N);
    
    // Print the result
    cout << shichi_go_count << endl;
    
    return 0;
}