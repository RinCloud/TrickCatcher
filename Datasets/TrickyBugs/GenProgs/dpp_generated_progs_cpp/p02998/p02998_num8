#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool isDotExists(const unordered_map<int, vector<int>>& dots, int x, int y) {
    if (dots.count(x) == 0) {
        return false;
    }
    const vector<int>& ys = dots.at(x);
    for (int i = 0; i < ys.size(); i++) {
        if (ys[i] == y) {
            return true;
        }
    }
    return false;
}

int main() {
    int N;
    cin >> N;
    
    unordered_map<int, vector<int>> dots;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        dots[x].push_back(y);
    }
    
    int count = 0;
    for (const auto& p1 : dots) {
        int x1 = p1.first;
        const vector<int>& ys1 = p1.second;
        for (int i = 0; i < ys1.size(); i++) {
            int y1 = ys1[i];
            for (const auto& p2 : dots) {
                int x2 = p2.first;
                const vector<int>& ys2 = p2.second;
                if (x1 == x2) {
                    continue;
                }
                for (int j = 0; j < ys2.size(); j++) {
                    int y2 = ys2[j];
                    int x3 = x1;
                    int y3 = y2;
                    int x4 = x2;
                    int y4 = y1;
                    if (isDotExists(dots, x3, y3) && isDotExists(dots, x4, y4)) {
                        count++;
                    }
                }
            }
        }
    }
    
    cout << count / 2 << endl;
    
    return 0;
}