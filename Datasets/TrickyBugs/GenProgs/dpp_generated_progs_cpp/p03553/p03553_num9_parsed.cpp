#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Read input
    int N;
    cin >> N;
    vector<int> gems(N);
    for (int i = 0; i < N; i++) {
        cin >> gems[i];
    }

    // Initialize variables
    int maxMoney = 0;

    // Iterate through each positive integer x
    for (int x = 1; x <= N; x++) {
        int money = 0;
        // Smash gems labeled with multiples of x
        for (int i = 0; i < N; i++) {
            if ((i + 1) % x == 0) {
                money += gems[i];
            }
        }
        // Update maxMoney if current money is higher
        if (money > maxMoney) {
            maxMoney = money;
        }
    }

    // Print the maximum amount of money that can be earned
    cout << maxMoney << endl;

    return 0;
}