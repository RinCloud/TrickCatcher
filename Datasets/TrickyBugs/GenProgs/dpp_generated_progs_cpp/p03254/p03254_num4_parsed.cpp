#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, x;
    cin >> N >> x;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    
    int happyChildren = 0;
    for (int i = 0; i < N; i++) {
        if (x >= a[i]) {
            x -= a[i];
            happyChildren++;
        } else {
            break;
        }
    }
    
    cout << happyChildren << endl;
    
    return 0;
}