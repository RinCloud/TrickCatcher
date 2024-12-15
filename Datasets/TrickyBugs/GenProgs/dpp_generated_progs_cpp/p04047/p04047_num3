#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    // Read input
    int N;
    cin >> N;
    
    vector<int> L(2*N);
    for (int i = 0; i < 2*N; i++) {
        cin >> L[i];
    }
    
    // Sort the skewer lengths in non-decreasing order
    sort(L.begin(), L.end());
    
    // Calculate the maximum total number of ingredients
    int maxIngredients = 0;
    for (int i = 1; i < 2*N; i += 2) {
        maxIngredients += L[i];
    }
    
    // Print the result
    cout << maxIngredients << endl;
    
    return 0;
}