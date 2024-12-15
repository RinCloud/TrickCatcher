#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> red_boxes(N + 1, 0);
    red_boxes[1] = 1;

    unordered_set<int> boxes;
    boxes.insert(1);

    for(int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;

        if(red_boxes[x] > 0) {
            red_boxes[y]++;
            if(red_boxes[x] == 1) {
                red_boxes[x]--;
                if(boxes.find(x) != boxes.end()) {
                    boxes.erase(x);
                }
                if(boxes.find(y) == boxes.end()) {
                    boxes.insert(y);
                }
            }
        }
    }

    cout << boxes.size() << endl;

    return 0;
}