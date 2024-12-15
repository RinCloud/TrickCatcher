#include <iostream>
using namespace std;

int main() {
    int W, H, N;
    cin >> W >> H >> N;
    
    int x, y, a;
    int left = 0, right = W, bottom = 0, top = H;
    for (int i = 0; i < N; i++) {
        cin >> x >> y >> a;
        
        if (a == 1) {
            left = max(left, x);
        } else if (a == 2) {
            right = min(right, x);
        } else if (a == 3) {
            bottom = max(bottom, y);
        } else if (a == 4) {
            top = min(top, y);
        }
    }
    
    int white_area = max(0, right - left) * max(0, top - bottom);
    cout << white_area << endl;
    
    return 0;
}