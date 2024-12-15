#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    
    vector<int> m(N);
    for (int i = 0; i < N; i++) {
        cin >> m[i];
    }
    
    sort(m.begin(), m.end());
    
    int count = N;
    X -= m[0];
    
    for (int i = 1; i < N; i++) {
        if (X >= m[i]) {
            count++;
            X -= m[i];
        } else {
            break;
        }
    }
    
    cout << count << endl;
    
    return 0;
}