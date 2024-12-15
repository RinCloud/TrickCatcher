#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int K;
    cin >> K;

    vector<int> digits;
    int sum = 0;

    // Find the smallest possible multiple of K
    for (int i = 1; ; i++) {
        int multiple = K * i;

        // Split the digits and calculate the sum
        while (multiple > 0) {
            digits.push_back(multiple % 10);
            multiple /= 10;
        }
        sum = accumulate(digits.begin(), digits.end(), 0);

        // Check if the sum is less than K
        if (sum <= K) {
            break;
        }

        digits.clear();
    }

    cout << sum << endl;

    return 0;
}