#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
    int x;
    int y;
    int color;
};

bool comparePoints(Point p1, Point p2) {
    if (p1.x == p2.x) {
        return p1.y < p2.y;
    }
    return p1.x < p2.x;
}

int main() {
    int n;
    cin >> n;
    
    vector<Point> points;
    
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        Point p;
        p.x = x;
        p.y = y;
        p.color = 0; // red
        points.push_back(p);
    }
    
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        Point p;
        p.x = x;
        p.y = y;
        p.color = 1; // blue
        points.push_back(p);
    }
    
    sort(points.begin(), points.end(), comparePoints);
    
    int redCount = 0;
    int blueCount = 0;
    int friendlyPairs = 0;
    
    for (int i = 0; i < 2 * n; i++) {
        if (points[i].color == 0) { // red
            redCount++;
        } else { // blue
            blueCount++;
        }
        
        if (redCount > blueCount) {
            friendlyPairs = max(friendlyPairs, redCount - blueCount);
        }
    }
    
    cout << friendlyPairs << endl;
    
    return 0;
}