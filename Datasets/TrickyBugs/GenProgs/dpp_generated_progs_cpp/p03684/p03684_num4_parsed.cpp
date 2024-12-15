#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct Town {
    int x;
    int y;
};

int main() {
    int N;
    cin >> N;
    
    vector<Town> towns(N);
    for (int i = 0; i < N; i++) {
        cin >> towns[i].x >> towns[i].y;
    }
    
    sort(towns.begin(), towns.end(), [](const Town& a, const Town& b) {
        return a.x < b.x;
    });
    
    int min_cost = 0;
    for (int i = 1; i < N; i++) {
        min_cost += abs(towns[i].x - towns[i-1].x);
    }
    
    sort(towns.begin(), towns.end(), [](const Town& a, const Town& b) {
        return a.y < b.y;
    });
    
    for (int i = 1; i < N; i++) {
        min_cost += abs(towns[i].y - towns[i-1].y);
    }
    
    cout << min_cost << endl;
    
    return 0;
}