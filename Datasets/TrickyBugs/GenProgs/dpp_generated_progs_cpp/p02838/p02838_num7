#include <iostream>
#include <vector>

using namespace std;

const long long MOD = 1e9 + 7;

long long calculateXorSum(vector<long long>& nums) {
    long long n = nums.size();
    long long xorSum = 0;

    for (int i = 0; i < 60; i++) {
        long long countOnes = 0;

        for (int j = 0; j < n; j++) {
            if (nums[j] & (1LL << i)) {
                countOnes++;
            }
        }

        long long countZeros = n - countOnes;
        xorSum = (xorSum + (countOnes * countZeros % MOD) * (1LL << i) % MOD) % MOD;
    }

    return xorSum;
}

int main() {
    int n;
    cin >> n;

    vector<long long> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    long long result = calculateXorSum(nums);
    cout << result << endl;

    return 0;
}