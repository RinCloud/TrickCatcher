#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i+1]) {
            count++;
            if (i < n - 2 && a[i] > a[i+2]) {
                count++;
            }
        }
    }
    
    cout << count << endl;
    
    return 0;
}