#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    map<int, int> x;
    map<int, int> y;
    map<pair<int, int>, bool> dots;
    
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        
        x[a]++;
        y[b]++;
        dots[{a, b}] = true;
    }
    
    int ans = 0;
    
    for (auto it = dots.begin(); it != dots.end(); it++) {
        int a = it->first.first;
        int b = it->first.second;
        if (x[a] + y[b] == N + 1) {
            ans++;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}