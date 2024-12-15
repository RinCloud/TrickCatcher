#include <iostream>
#include <vector>
using namespace std;

int main() {
    string S;
    cin >> S;
    int n = S.length();
    int ans = 0;

    // Creating a frequency array to count the number of times each remainder occurs
    vector<int> freq(2019, 0);
    freq[0]++; // Base case - consider empty string

    // Calculating prefix sum of remainders
    int prefix_sum = 0;
    int power_of_10 = 1;
    for (int i = n - 1; i >= 0; i--) {
        prefix_sum = (prefix_sum + (S[i] - '0') * power_of_10) % 2019;
        power_of_10 = (power_of_10 * 10) % 2019;
        freq[prefix_sum]++;
    }

    // Counting pairs
    for (int i = 0; i < 2019; i++) {
        ans += (freq[i] * (freq[i] - 1)) / 2;
    }
    cout << ans << endl;

    return 0;
}