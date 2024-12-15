#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
    int x;
    int y;
};

bool comparePoints(const Point& p1, const Point& p2) {
    if(p1.x == p2.x) {
        return p1.y < p2.y;
    }
    return p1.x < p2.x;
}

int main() {
    int N;
    std::cin >> N;
    
    std::vector<Point> redPoints(N);
    std::vector<Point> bluePoints(N);
    
    for(int i = 0; i < N; i++) {
        int a, b;
        std::cin >> a >> b;
        redPoints[i].x = a;
        redPoints[i].y = b;
    }
    
    for(int i = 0; i < N; i++) {
        int c, d;
        std::cin >> c >> d;
        bluePoints[i].x = c;
        bluePoints[i].y = d;
    }
    
    std::sort(redPoints.begin(), redPoints.end(), comparePoints);
    std::sort(bluePoints.begin(), bluePoints.end(), comparePoints);
    
    int pairs = 0;
    int j = 0;
    
    for(int i = 0; i < N; i++) {
        while(j < N && bluePoints[j].x <= redPoints[i].x) {
            j++;
        }
        
        if(j < N && bluePoints[j].y > redPoints[i].y) {
            pairs++;
            j++;
        }
    }
    
    std::cout << pairs << std::endl;
    
    return 0;
}