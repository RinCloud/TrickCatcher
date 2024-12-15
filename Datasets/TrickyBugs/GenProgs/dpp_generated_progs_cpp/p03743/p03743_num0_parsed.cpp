#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    
    vector<int> distances(N);
    for (int i = 0; i < N; i++) {
        cin >> distances[i];
    }
    
    int Q;
    cin >> Q;
    
    while (Q--) {
        int q;
        cin >> q;
        
        int total_distance = 0;
        for (int i = 0; i < q; i++) {
            total_distance += distances[i];
        }
        
        if ((total_distance >= D && (total_distance - D) % 2 == 0) || total_distance >= 2 * D) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}