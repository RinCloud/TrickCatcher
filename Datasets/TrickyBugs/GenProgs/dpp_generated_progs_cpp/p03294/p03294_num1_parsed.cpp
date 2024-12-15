#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end(), greater<int>());
    
    int m = a[0] - 1;
    int f = 0;
    for (int i = 0; i < N; i++) {
        f += m % a[i];
    }
    
    cout << f << endl;
    
    return 0;
}