#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    long long k;
    cin >> s >> k;

    // Replace each digit with the corresponding number of repeated digits
    for (char& c : s) {
        int count = c - '0';
        string repeatedDigit(count, c);
        c = repeatedDigit;
    }

    long long len = s.length();
    long long curr_len = len;
    long long curr_index = 0;
    long long num_repetitions = 1;

    // Find the position of K-th character after 5 * 10^15 days
    while (k > curr_len) {
        k -= curr_len;

        // Move to the next repetition
        curr_index++;
        if (curr_index == len) {
            curr_index = 0;
            num_repetitions *= 10;
        }

        // Update the current length
        curr_len = len * num_repetitions;
    }

    // Output the K-th character
    cout << s[curr_index][k-1] << endl;

    return 0;
}