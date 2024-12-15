#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    vector<int> count(N + 1, 0); // Keep track of the count of each element
    
    for (int i = 0; i < N; i++) {
        int curr = a[i];
        if (curr > N || count[curr] == 1) {
            cout << -1 << endl;
            return 0;
        }
        count[curr]++;
    }
    
    int broken = 0;
    for (int i = 1; i <= N; i++) {
        if (count[i] == 0) {
            broken++;
        }
    }
    
    cout << broken << endl;
    
    return 0;
}