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
    for (int i = 0; i < N-1; i++) {
        if (p[i] > p[i+1]) {
            sorted = false;
            break;
        }
    }
    
    if (sorted) {
        cout << "YES" << endl;
        return 0;
    }
    
    for (int i = 0; i < N-1; i++) {
        for (int j = i+1; j < N; j++) {
            swap(p[i], p[j]);
            bool sorted = true;
            for (int k = 0; k < N-1; k++) {
                if (p[k] > p[k+1]) {
                    sorted = false;
                    break;
                }
            }
            if (sorted) {
                cout << "YES" << endl;
                return 0;
            }
            swap(p[i], p[j]);
        }
    }
    
    cout << "NO" << endl;
    
    return 0;
}