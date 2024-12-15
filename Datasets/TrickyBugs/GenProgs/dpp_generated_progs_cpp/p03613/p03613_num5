#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int x = a[0], count = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] != x) {
            count++;
            x = a[i];
        }
    }
    
    cout << count << endl;
    
    return 0;
}