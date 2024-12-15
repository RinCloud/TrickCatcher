#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    // Keep track of the maximum amount of money that can be earned
    int maxMoney = 0;
    
    // Iterate over all possible values of x
    // smashing all gems labeled with multiples of x
    for (int x = 1; x <= N; x++) {
        int money = 0;
        
        // Check each gem labeled i if it remains without getting smashed
        for (int i = 1; i <= N; i++) {
            if (i % x != 0) {
                money += a[i - 1];
            }
        }
        
        // Update the maximum amount of money that can be earned
        maxMoney = max(maxMoney, money);
    }
    
    cout << maxMoney << endl;
    
    return 0;
}