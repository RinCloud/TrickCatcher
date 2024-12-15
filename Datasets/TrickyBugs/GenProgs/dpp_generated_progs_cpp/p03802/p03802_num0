#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool checkDistance(int d, const vector<pair<int, int>>& flags)
{
    int n = flags.size();
    int prevX = flags[0].first;
    int prevY = flags[0].second;
    
    for (int i = 1; i < n; ++i) {
        int currX = flags[i].first;
        int currY = flags[i].second;
        
        // Check the distance between current flag and previous flag
        int distance = max(abs(currX - prevX), abs(currY - prevY));
        if (distance < d) {
            return false;
        }
        
        prevX = currX;
        prevY = currY;
    }
    
    return true;
}

int main()
{
    int n;
    cin >> n;
    
    vector<pair<int, int>> flags(n);
    for (int i = 0; i < n; ++i) {
        cin >> flags[i].first >> flags[i].second;
    }
    
    int left = 0;
    int right = 1e9;
    
    // Perform binary search to find the maximum possible value of d
    while (left < right) {
        int mid = (left + right + 1) / 2;
        
        if (checkDistance(mid, flags)) {
            left = mid;
        } else {
            right = mid - 1;
        }
    }
    
    cout << left << endl;
    
    return 0;
}