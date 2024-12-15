#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;

    int count = 0;
    int n = S.length();

    vector<int> prefixSum(n + 1, 0);
    vector<int> modCount(2019, 0);
  
    // Calculating prefix sum
    for (int i = 1; i <= n; i++) {
        prefixSum[i] = (prefixSum[i - 1] * 10 + (S[i - 1] - '0')) % 2019;
        modCount[prefixSum[i]]++;
    }

    // Counting pairs
    for (int i = 0; i < 2019; i++) {
        count += (modCount[i] * (modCount[i] - 1)) / 2;
    }

    cout << count << endl;

    return 0;
}
