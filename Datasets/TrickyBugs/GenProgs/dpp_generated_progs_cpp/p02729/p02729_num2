#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    // Number of ways to choose 2 even numbers from N
    int even_even = (N * (N - 1)) / 2;

    // Number of ways to choose 2 odd numbers from M
    int odd_odd = (M * (M - 1)) / 2;

    // Number of ways to choose 1 even number and 1 odd number
    int even_odd = N * M;

    // Total number of ways to choose two balls with sum of numbers even
    int total = even_even + odd_odd + even_odd;
    
    cout << total << endl;
    
    return 0;
}