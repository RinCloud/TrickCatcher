#include<bits/stdc++.h>
using namespace std;

// Function to check whether a number is prime or not
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to find the minimum number of operations required
// to flip all the cards face down
int findMinOperations(int N, vector<int>& cards) {
    int minOperations = 0;
    for (int i = 0; i < N; i++) {
        int num = cards[i];
        if (isPrime(num) || isPrime(num + 1)) {
            minOperations++;
        } else {
            minOperations += 2;
        }
    }
    return minOperations;
}

int main() {
    int N;
    cin >> N;
    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }
    int minOperations = findMinOperations(N, cards);
    cout << minOperations << endl;
    return 0;
}