#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Town {
    int x, y;
};

int main() {
    int N;
    cin >> N;
    
    vector<Town> towns(N);
    for (int i = 0; i < N; i++) {
        cin >> towns[i].x >> towns[i].y;
    }
    
    sort(towns.begin(), towns.end(), [](const Town& a, const Town& b){
        return a.x < b.x;
    });
    
    int minCost = INT_MAX;
    
    for (int i = 1; i < N; i++) {
        minCost = min(minCost, towns[i].x - towns[i-1].x);
    }
    
    sort(towns.begin(), towns.end(), [](const Town& a, const Town& b){
        return a.y < b.y;
    });
    
    for (int i = 1; i < N; i++) {
        minCost = min(minCost, towns[i].y - towns[i-1].y);
    }
    
    cout << minCost << endl;
    
    return 0;
}