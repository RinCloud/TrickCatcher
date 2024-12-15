#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> sticks(N);
    for (int i = 0; i < N; i++) {
        cin >> sticks[i];
    }
    
    sort(sticks.begin(), sticks.end());
    
    int count = 0;
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                if (sticks[i] != sticks[j] && sticks[j] != sticks[k] && sticks[i] + sticks[j] > sticks[k]) {
                    count++;
                }
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}