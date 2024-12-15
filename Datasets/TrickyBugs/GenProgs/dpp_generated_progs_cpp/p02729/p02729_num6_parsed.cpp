#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    int evenCount = N;
    int oddCount = M;
    
    // The number of ways to choose two balls such that the sum is even
    int ways = (evenCount * (evenCount - 1)) / 2 + (oddCount * (oddCount - 1)) / 2;
    
    cout << ways << endl;
    
    return 0;
}