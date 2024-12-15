#include <iostream>
using namespace std;

// Function to find the Nth Lucas number
long long findLucasNumber(int N) {
    if (N == 0)
        return 2;
    else if (N == 1)
        return 1;

    long long prev = 2;
    long long curr = 1;

    for (int i = 2; i <= N; i++) {
        long long next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
}

int main() {
    int N;
    cin >> N;

    // Find the Nth Lucas number
    long long lucasNumber = findLucasNumber(N);

    // Print the result
    cout << lucasNumber << endl;

    return 0;
}