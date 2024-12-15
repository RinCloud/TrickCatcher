#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> red_boxes(N + 1, 0);
    red_boxes[1] = 1;
    set<int> possible_red_boxes;
    possible_red_boxes.insert(1);

    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;

        if (red_boxes[x] == 1) {
            red_boxes[x] = 0;
            red_boxes[y] = 1;
            possible_red_boxes.insert(y);
        }
        if (red_boxes[x] == 0 && possible_red_boxes.count(x) > 0) {
            possible_red_boxes.erase(x);
            possible_red_boxes.insert(y);
        }
    }

    cout << possible_red_boxes.size() << endl;

    return 0;
}