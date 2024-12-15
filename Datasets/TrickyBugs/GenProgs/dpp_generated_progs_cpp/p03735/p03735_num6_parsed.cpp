#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> red, blue;
    
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        
        red.push_back(max(x, y));
        blue.push_back(min(x, y));
    }
    
    sort(red.begin(), red.end());
    sort(blue.begin(), blue.end());
    
    long long ans = (long long)(red[N-1] - red[0]) * (blue[N-1] - blue[0]);

    cout << ans << endl;
    
    return 0;
}