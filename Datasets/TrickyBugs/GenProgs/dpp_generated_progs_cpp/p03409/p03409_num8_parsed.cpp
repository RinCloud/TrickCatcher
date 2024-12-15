#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
    int x, y;
};

bool comparePoints(Point& p1, Point& p2) {
    if (p1.x != p2.x) {
        return p1.x < p2.x;
    }
    return p1.y < p2.y;
}

int main() {
    int N;
    std::cin >> N;

    std::vector<Point> redPoints(N);
    std::vector<Point> bluePoints(N);

    for (int i = 0; i < N; i++) {
        std::cin >> redPoints[i].x >> redPoints[i].y;
    }

    for (int i = 0; i < N; i++) {
        std::cin >> bluePoints[i].x >> bluePoints[i].y;
    }

    std::sort(redPoints.begin(), redPoints.end(), comparePoints);
    std::sort(bluePoints.begin(), bluePoints.end(), comparePoints);

    int pairs = 0;
    for (int i = 0; i < N; i++) {
        int j = i + 1;
        while (j < N && redPoints[i].x < bluePoints[j].x && redPoints[i].y < bluePoints[j].y) {
            pairs++;
            j++;
        }
    }

    std::cout << pairs << std::endl;

    return 0;
}