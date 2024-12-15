#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read the input
    int N;
    cin >> N;

    // Create a vector of N numbers
    vector<int> numbers(N);
    for (int i = 0; i < N; i++) {
        numbers[i] = i + 1;
    }

    // Sort the vector in descending order
    sort(numbers.begin(), numbers.end(), greater<int>());

    // Calculate the maximum possible value
    long long sum = 0;
    for (int i = 0; i < N; i++) {
        sum += i % numbers[i];
    }

    // Print the result
    cout << sum << endl;

    return 0;
}
