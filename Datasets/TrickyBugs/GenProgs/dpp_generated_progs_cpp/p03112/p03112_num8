#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

long long findMinDistance(vector<long long>& shrines, vector<long long>& temples, long long x) {
    long long minDistance = LLONG_MAX;
    int s = shrines.size();
    int t = temples.size();
    auto it1 = lower_bound(shrines.begin(), shrines.end(), x);
    auto it2 = lower_bound(temples.begin(), temples.end(), x);
    
    // Case 1: Start from a shrine and then go to a temple
    if (it1 != shrines.end() && it2 != temples.end()) {
        minDistance = min(minDistance, (*it1 - x) + (*it2 - *it1));
    }
    
    // Case 2: Start from a temple and then go to a shrine
    if (it1 != shrines.begin() && it2 != temples.begin()) {
        it1--;
        it2--;
        minDistance = min(minDistance, (x - *it1) + (*it1 - *it2));
    }
    
    // Case 3: Start from a shrine and then go to the last temple
    if (it1 != shrines.end() && it2 == temples.end()) {
        minDistance = min(minDistance, (*it1 - x));
    }
    
    // Case 4: Start from a temple and then go to the last shrine
    if (it1 == shrines.end() && it2 != temples.begin()) {
        it2--;
        minDistance = min(minDistance, (x - *it2));
    }
    
    return minDistance;
}

int main() {
    int A, B, Q;
    cin >> A >> B >> Q;
    
    vector<long long> shrines(A);
    vector<long long> temples(B);
    for (int i = 0; i < A; i++) {
        cin >> shrines[i];
    }
    for (int i = 0; i < B; i++) {
        cin >> temples[i];
    }
    
    for (int i = 0; i < Q; i++) {
        long long x;
        cin >> x;
        long long minDistance = findMinDistance(shrines, temples, x);
        cout << minDistance << endl;
    }
    
    return 0;
}