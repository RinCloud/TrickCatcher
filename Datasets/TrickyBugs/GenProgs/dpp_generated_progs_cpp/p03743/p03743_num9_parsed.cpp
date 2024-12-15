#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    
    vector<int> distance(N);
    for(int i = 0; i < N; i++) {
        cin >> distance[i];
    }
    
    int Q;
    cin >> Q;
    
    while(Q--) {
        int query;
        cin >> query;
        
        int sum = 0;
        bool flag = false;
        
        for(int i = 0; i < N; i++) {
            if(query == i + 1) {
                sum += distance[i];
                if(sum >= D) {
                    flag = true;
                    break;
                }
            } else {
                if(distance[i] >= D) {
                    flag = true;
                    break;
                }
                sum += distance[i];
                if(sum >= D) {
                    flag = true;
                    break;
                }
            }
        }
        
        if(flag) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    
    return 0;
}