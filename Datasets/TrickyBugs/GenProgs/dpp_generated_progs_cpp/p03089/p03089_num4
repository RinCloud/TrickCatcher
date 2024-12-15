#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> b(N);
    for (int i = 0; i < N; i++) {
        cin >> b[i];
    }
    
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        int pos = -1;
        for (int j = 0; j <= i; j++) {
            if (a[j] == 0 && (pos == -1 || b[j] < b[pos])) {
                pos = j;
            }
        }
        if (pos == -1 || b[i] < b[pos]) {
            cout << -1 << endl;
            return 0;
        }
        a[pos] = b[i];
        cout << b[i] << endl;
    }
    
    return 0;
}