#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const long long MOD = 998244353;

struct Robot {
    long long x, d;
};

bool cmp(Robot a, Robot b) {
    return a.x < b.x;
}

int main() {
    int N;
    cin >> N;
    
    vector<Robot> robots(N);
    for (int i = 0; i < N; i++) {
        cin >> robots[i].x >> robots[i].d;
    }
    
    sort(robots.begin(), robots.end(), cmp);
    
    vector<long long> dp(N, 0); // dp[i] represents the number of sets of robots remaining on the number line ending at robot i
    dp[0] = 1;
    
    long long totalSets = 1; // total number of sets of robots remaining on the number line
    
    for (int i = 1; i < N; i++) {
        long long prevSets = totalSets; // number of sets of robots remaining on the number line without including robot i
        
        // Count the number of sets of robots remaining on the number line including robot i
        for (int j = i - 1; j >= 0; j--) {
            if (robots[i].x >= robots[j].x + robots[j].d) {
                // If robot i can reach to robot j, increase the number of sets of robots remaining on the number line with robot i
                dp[i] = (dp[i] + dp[j]) % MOD;
                totalSets = (totalSets + dp[i]) % MOD;
                break;
            }
        }
        
        // Increase the number of sets of robots remaining on the number line without including robot i
        totalSets = (totalSets + prevSets) % MOD;
    }
    
    cout << totalSets << endl;
    
    return 0;
}