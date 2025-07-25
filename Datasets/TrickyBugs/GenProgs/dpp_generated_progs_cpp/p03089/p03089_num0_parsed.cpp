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
    
    vector<int> a;
    for (int i = 0; i < N; i++) {
        for (int j = i; j > 0; j--) {
            if (a[j - 1] == j) {
                a[j - 1] = i + 1;
            } else {
                break;
            }
        }
        a.insert(a.begin() + i, i + 1);
        
        if (a != b) {
            cout << -1 << endl;
            return 0;
        }
    }
    
    for (int i = 0; i < N; i++) {
        cout << a[i] << endl;
    }

    return 0;
}
