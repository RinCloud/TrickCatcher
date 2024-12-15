#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> cities(N);
    for (int i = 0; i < N; i++) {
        cin >> cities[i];
    }
    
    sort(cities.begin(), cities.end());
    
    int maxD = 0;
    for (int i = 1; i < N; i++) {
        int distance = abs(cities[i] - cities[i-1]);
        maxD = max(maxD, distance);
    }
    
    int distanceToFirst = abs(cities[0] - X);
    int distanceToLast = abs(cities[N-1] - X);
    
    maxD = max(maxD, distanceToFirst);
    maxD = max(maxD, distanceToLast);
    
    cout << maxD << endl;
    
    return 0;
}