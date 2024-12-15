#include<iostream>
#include<vector>
using namespace std;

// Function to calculate the prime factorization of a number
vector<pair<int, int>> primeFactorization(int n) {
    vector<pair<int, int>> factors;
    int count = 0;
    while (n % 2 == 0) {
        count++;
        n /= 2;
    }
    if (count > 0)
        factors.push_back(make_pair(2, count));

    for (int i = 3; i * i <= n; i += 2) {
        count = 0;
        while (n % i == 0) {
            count++;
            n /= i;
        }
        if (count > 0)
            factors.push_back(make_pair(i, count));
    }

    if (n > 2)
        factors.push_back(make_pair(n, 1));

    return factors;
}

// Function to calculate the number of divisors with prime factorization
int numberOfDivisors(vector<pair<int, int>> factors) {
    int divisors = 1;
    for (auto factor : factors)
        divisors *= (factor.second + 1);
    return divisors;
}

int main() {
    int N;
    cin >> N;

    // Calculate the prime factorization of N!
    vector<pair<int, int>> factors;
    for (int i = 2; i <= N; i++) {
        vector<pair<int, int>> tempFactors = primeFactorization(i);
        for (auto factor : tempFactors) {
            bool found = false;
            for (auto& f : factors) {
                if (f.first == factor.first) {
                    f.second += factor.second;
                    found = true;
                    break;
                }
            }
            if (!found)
                factors.push_back(factor);
        }
    }

    // Calculate the number of Shichi-Go numbers
    int ShichiGoNumbers = 0;
    for (auto factor : factors) {
        if (factor.second >= 74)
            ShichiGoNumbers++;
    }

    cout << ShichiGoNumbers << endl;

    return 0;
}