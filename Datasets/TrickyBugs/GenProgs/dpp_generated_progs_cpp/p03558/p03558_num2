#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int K;
    cin >> K;

    bool found = false;
    vector<int> digits;
    while (!found) {
        int sum = 0;
        int N = K;
        while (N > 0) {
            sum += N % 10;
            N /= 10;
        }
        if (sum % K == 0) {
            found = true;
            cout << sum << endl;
        }
        else {
            digits.push_back(K % 10);
            K /= 10;
            if (K == 0) {
                sort(digits.begin(), digits.end());
                int idx = 0;
                while (K == 0) {
                    int digit = digits[idx];
                    K = digit * 10 + K;
                    idx++;
                }
            }
        }

    }

    return 0;
}