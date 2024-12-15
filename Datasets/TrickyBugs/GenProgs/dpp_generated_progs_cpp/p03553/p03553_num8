#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> gems(N);
    for (int i = 0; i < N; i++) {
        cin >> gems[i];
    }
    
    long long maxMoney = 0;
    for (int i = 1; i <= N; i++) {
        int numGems = 0;
        for (int j = i; j <= N; j += i) {
            if (gems[j-1] > 0) {
                numGems++;
            }
        }
        maxMoney += (numGems * gems[i-1]);
    }
    
    cout << maxMoney << endl;
    
    return 0;
}