#include <iostream>
using namespace std;

int main() {
    int L, R;
    cin >> L >> R;
  
    int minMod = 2019;
    for (int i = L; i < R; i++) {
        for (int j = i + 1; j <= R; j++) {
            int mod = (i * j) % 2019;
            if (mod < minMod) {
                minMod = mod;
            }
        }
    }
  
    cout << minMod << endl;
  
    return 0;
}