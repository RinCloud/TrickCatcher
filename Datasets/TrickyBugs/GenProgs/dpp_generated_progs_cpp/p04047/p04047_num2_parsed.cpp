#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> skewers(2*N);
    for (int i = 0; i < 2*N; i++) {
        cin >> skewers[i];
    }
    
    sort(skewers.begin(), skewers.end());
    
    int maxIngredients = 0;
    for (int i = 0; i < N; i++) {
        maxIngredients += skewers[2*i];
    }
    
    cout << maxIngredients << endl;
    
    return 0;
}