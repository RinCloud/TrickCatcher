#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// Function to calculate the number of divisors of a number
int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            // If both divisors are same, increment count by 1
            if (n / i == i) {
                count++;
            }
            // Otherwise, increment count by 2
            else {
                count += 2;
            }
        }
    }
    return count;
}

// Function to check if two numbers are coprime
bool isCoprime(int a, int b) {
    // Find the greatest common divisor of a and b
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    // If gcd is 1, numbers are coprime
    if (a == 1) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int A, B;
    cin >> A >> B;

    // Find all divisors of A and B
    vector<int> divisors;
    for (int i = 1; i <= min(A, B); i++) {
        if (A % i == 0 && B % i == 0) {
            divisors.push_back(i);
        }
    }

    int maxDivisors = 0;
    
    // Iterate over all subsets of divisors
    for (int mask = 0; mask < (1 << divisors.size()); mask++) {
        vector<int> chosenDivisors;
        
        // Check if each divisor in the subset is coprime with other divisors
        for (int i = 0; i < divisors.size(); i++) {
            if (mask & (1 << i)) {
                bool isCoprimeWithOthers = true;
                for (int j = 0; j < chosenDivisors.size(); j++) {
                    if (!isCoprime(divisors[i], chosenDivisors[j])) {
                        isCoprimeWithOthers = false;
                        break;
                    }
                }
                if (isCoprimeWithOthers) {
                    chosenDivisors.push_back(divisors[i]);
                }
            }
        }
        
        // Update the maximum number of divisors
        maxDivisors = max(maxDivisors, (int)chosenDivisors.size());
    }

    cout << maxDivisors << endl;
    
    return 0;
}