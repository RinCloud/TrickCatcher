#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    string S;
    cin >> S;

    int n = S.length();
    vector<int> prefix_sum(n + 1, 0);
    unordered_map<int, int> count;
    count[0] = 1;

    int result = 0;
    int power_of_10 = 1;
    int current_sum = 0;

    for (int i = n - 1; i >= 0; i--) {
        int digit = S[i] - '0';
        current_sum = (current_sum + digit * power_of_10) % 2019;
        power_of_10 = (power_of_10 * 10) % 2019;

        result += count[current_sum];
        count[current_sum]++;
    }

    cout << result << endl;

    return 0;
}