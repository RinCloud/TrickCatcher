#include <iostream>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    int n = S.length();
    int count = 0;

    // Iterate through all possible pairs of indices
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            // Check if the substring from i to j is a multiple of 2019
            string substring = S.substr(i, j - i + 1);
            int num = stoi(substring);
            if (num % 2019 == 0) {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}