#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(int n, int v, vector<int>& x) {
    for(int i=0;i<n-1;i++) {
        if(abs(x[i]-x[i+1])>v){
            return false;
        }
    }
    return true;
}

int main() {
    int n, v;
    cin >> n >> v;
    vector<int> x(n);
    for(int i=0;i<n;i++) {
        cin >> x[i];
    }
    
    vector<bool> result(n, false);
    for(int i=0;i<n;i++) {
        vector<int> x_copy = x;
        x_copy.erase(x_copy.begin()+i);
        
        if(isPossible(n-1, v, x_copy)) {
            result[i] = true;
        }
        reverse(x_copy.begin(), x_copy.end());
        if(isPossible(n-1, v, x_copy)) {
            result[i] = true;
        }
    }
    
    for(int i=0;i<n;i++) {
        if(result[i]) {
            cout << "Possible" << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}