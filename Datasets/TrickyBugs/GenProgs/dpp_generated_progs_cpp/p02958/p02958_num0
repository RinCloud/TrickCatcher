#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> p(N);
    for (int i = 0; i < N; i++) {
        cin >> p[i];
    }
    
    bool sorted = true;
    for (int i = 0; i < N; i++) {
        if (p[i] != i + 1) {
            sorted = false;
            break;
        }
    }
    
    if (sorted) {
        cout << "YES";
    } else {
        bool possible = false;
        for (int i = 1; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                if (p[i] > p[j]) {
                    possible = true;
                    break;
                }
            }
            if (possible) {
                break;
            }
        }
        
        if (possible) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }
    
    return 0;
}