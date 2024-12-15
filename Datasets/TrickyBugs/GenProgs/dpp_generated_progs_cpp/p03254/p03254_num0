#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, x;
    cin >> N >> x;
    
    vector<int> a(N);
    for(int i=0; i<N; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    int happy_children = 0;
    for(int i=0; i<N; i++) {
        if(x >= a[i]) {
            happy_children++;
            x -= a[i];
        } else {
            break;
        }
    }
    
    cout << happy_children << endl;
    
    return 0;
}