#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, A;
    cin >> N >> A;
    
    vector<int> cards(N);
    for(int i = 0; i < N; i++) {
        cin >> cards[i];
    }
    
    int ans = 0;
    
    // Try all possible subsets of cards
    for(int mask = 0; mask < (1 << N); mask++) {
        int sum = 0;
        int count = 0;
        
        // Calculate the sum of selected cards
        for(int i = 0; i < N; i++) {
            if(mask & (1 << i)) {
                sum += cards[i];
                count++;
            }
        }
        
        // If the average is equal to A, increment the answer
        if(count > 0 && sum / count == A) {
            ans++;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}