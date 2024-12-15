#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    int spells = 0;
    for (int i = 0; i < N-1; i++) {
        if (a[i] == a[i+1]) {
            spells++;
            a[i+1] = 0;
        }
    }
    
    cout << spells << endl;
    
    return 0;
}