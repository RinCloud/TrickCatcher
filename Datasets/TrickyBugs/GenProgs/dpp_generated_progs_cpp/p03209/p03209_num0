#include <iostream>
#include <cmath>

using namespace std;

long long getPatties(int level, long long layers) {
    // Base case: level 0 burger only has 1 patty
    if (level == 0) {
        return 1;
    }
    
    long long midLayer = (1LL << (level + 1)) - 3; // Number of layers in a level-L burger excluding the top and bottom bun
    
    // The number of layers to consider is less than or equal to the number of layers in a level-(level-1) burger
    if (layers <= midLayer + 2) {
        return getPatties(level - 1, layers - 1);
    }
    
    // All layers in a level-L burger, excluding the top and bottom bun, are patty layers
    long long pattiesInMidLayer = (1LL << level) - 1;
    
    // The number of layers to consider is greater than the number of layers in a level-(level-1) burger
    if (layers <= 2 * midLayer + 3) {
        return pattiesInMidLayer + 1 + getPatties(level - 1, layers - midLayer - 2);
    }
    
    // All layers in a level-L burger, excluding the top and bottom bun, plus the bun layers, are patty layers
    return 2 * pattiesInMidLayer + 1;
}

int main() {
    int N;
    long long X;
    cin >> N >> X;
    
    cout << getPatties(N, X) << endl;
    
    return 0;
}