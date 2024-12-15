#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct Town {
    int x;
    int y;
};

bool compareX(const Town& t1, const Town& t2) {
    return t1.x < t2.x;
}

bool compareY(const Town& t1, const Town& t2) {
    return t1.y < t2.y;
}

int main() {
    int N;
    cin >> N;
    
    vector<Town> towns(N);
    for (int i = 0; i < N; i++) {
        cin >> towns[i].x >> towns[i].y;
    }
    
    sort(towns.begin(), towns.end(), compareX);
    
    int minCost = 0;
    for (int i = 1; i < N; i++) {
        minCost += abs(towns[i].x - towns[i - 1].x);
    }
    
    sort(towns.begin(), towns.end(), compareY);
    
    for (int i = 1; i < N; i++) {
        minCost += abs(towns[i].y - towns[i - 1].y);
    }
    
    cout << minCost << endl;
    
    return 0;
}