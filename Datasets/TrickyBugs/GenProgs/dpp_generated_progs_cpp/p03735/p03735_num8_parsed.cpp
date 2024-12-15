#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> red, blue;
    
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        
        red.push_back(min(x, y));
        blue.push_back(max(x, y));
    }
    
    sort(red.begin(), red.end());
    sort(blue.begin(), blue.end());
    
    int R_min = red[0];
    int R_max = red[N-1];
    int B_min = blue[0];
    int B_max = blue[N-1];
    
    long long min_value = (R_max - R_min) * 1LL * (B_max - B_min);
    
    cout << min_value << endl;
    
    return 0;
}