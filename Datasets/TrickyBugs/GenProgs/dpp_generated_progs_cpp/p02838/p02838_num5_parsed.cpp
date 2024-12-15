#include <iostream>
#include <vector>
#define MOD 1000000007

using namespace std;

long long XORSum(vector<long long>& arr) {
    int n = arr.size();
    long long sum = 0;
    for (int i = 0; i < 60; i++) {
        long long cnt = 0;
        for (int j = 0; j < n; j++) {
            if ((arr[j] >> i) & 1) {
                cnt++;
            }
        }
        sum = (sum + ((cnt * (n - cnt) % MOD) * (1LL << i) % MOD)) % MOD;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long result = XORSum(arr);
    cout << result << endl;
    return 0;
}