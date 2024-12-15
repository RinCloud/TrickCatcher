#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    
    vector<int> distance(N);
    for (int i = 0; i < N; i++) {
        cin >> distance[i];
    }
    
    vector<bool> reachable(N, false);
    
    int maxDistance = D;
    for (int i = N-1; i >= 0; i--) {
        if (distance[i] > maxDistance) {
            reachable[i] = true;
        } else {
            maxDistance = max(maxDistance - distance[i], distance[i]);
        }
    }
    
    int Q;
    cin >> Q;
    
    for (int i = 0; i < Q; i++) {
        int q;
        cin >> q;
        q--;
        if(reachable[q]){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    
    return 0;
}