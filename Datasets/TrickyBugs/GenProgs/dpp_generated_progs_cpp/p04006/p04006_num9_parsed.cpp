#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, x;
    cin >> N >> x;
    
    vector<int> a(N);
    for(int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    int minTime = a[0]; // Minimum time is to catch the first slime
    
    for(int i = 1; i < N; i++) {
        minTime = min(minTime, a[i]); // Find the minimum time to catch the next slime
        
        int spellTime = (a[i] + a[i-1]) - x; // Time taken to change colors using the spell
        
        if(spellTime < 0) {
            minTime += spellTime;
        }
    }
    
    cout << minTime << endl;
    
    return 0;
}