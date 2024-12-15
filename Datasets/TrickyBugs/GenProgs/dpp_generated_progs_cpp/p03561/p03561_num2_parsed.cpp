#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to generate the lexicographically smallest sequence
vector<int> generateSequence(int N, int K) {
    int X = factorial(N);
    vector<int> sequence(N, 1);
    
    // Finding the (X/2)-th (rounded up to the nearest integer) lexicographically smallest sequence
    int mid = (X + 1) / 2;
    
    // Starting from the first element, increase the values until the mid value is reached
    for (int i = 0; i < N; i++) {
        if (mid > 1) {
            int diff = min(mid - 1, K - 1);
            sequence[i] += diff;
            mid -= diff;
        }
    }
    
    return sequence;
}

// Function to print a vector with spaces in between
void printVector(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

int main() {
    int K, N;
    cin >> K >> N;
    
    vector<int> sequence = generateSequence(N, K);
    printVector(sequence);
    
    return 0;
}