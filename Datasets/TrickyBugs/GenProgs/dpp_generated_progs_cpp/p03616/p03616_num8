#include <iostream>
#include <vector>
using namespace std;

int main() {
    int X, K, Q;
    cin >> X >> K;
    
    vector<int> r(K);
    for (int i = 0; i < K; i++) {
        cin >> r[i];
    }
    
    cin >> Q;
    
    vector<int> t(Q), a(Q);
    for (int i = 0; i < Q; i++) {
        cin >> t[i] >> a[i];
    }
    
    vector<int> upper(X + 1);
    for (int i = 1; i <= X; i++) {
        upper[i] = X - i;
    }
    
    int currBulb = 0, remainingTime = 0;
    
    for (int i = 0; i < Q; i++) {
        int ti = t[i], ai = a[i];
        
        if (remainingTime == 0) {
            for (int j = currBulb; j < K; j++) {
                if (r[j] > ti) {
                    remainingTime = r[j] - ti;
                    currBulb = j % 2;
                    break;
                }
            }
        }
        
        int currSand = (currBulb == 0) ? ai : upper[X] - (ai - 1);
        if (remainingTime > 0) {
            currSand -= (remainingTime > currSand) ? currSand : remainingTime;
            remainingTime = (remainingTime > currSand) ? remainingTime - currSand : 0;
        }
        
        cout << currSand << endl;
    }
    
    return 0;
}