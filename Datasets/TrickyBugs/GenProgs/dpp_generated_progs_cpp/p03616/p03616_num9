#include <iostream>
#include <vector>

using namespace std;

int main() {
    int X, K, Q;
    cin >> X >> K;
    
    vector<int> r(K);
    for(int i=0; i<K; i++) {
        cin >> r[i];
    }
    
    cin >> Q;
    
    for(int i=0; i<Q; i++) {
        int t, a;
        cin >> t >> a;
        
        int upperBulb = a;
        int lowerBulb = X - a;
        
        for(int j=0; j<K; j++) {
            if(t >= r[j]) {
                int sandToMove = min(upperBulb, lowerBulb);
                upperBulb -= sandToMove;
                lowerBulb += sandToMove;
            }
        }
        
        if(t >= r[K-1]) {
            swap(upperBulb, lowerBulb);
        }
        
        cout << upperBulb << endl;
    }
    
    return 0;
}