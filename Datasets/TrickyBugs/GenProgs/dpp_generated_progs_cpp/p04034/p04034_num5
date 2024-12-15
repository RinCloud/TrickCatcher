#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    unordered_set<int> red_boxes;
    red_boxes.insert(1);
    
    vector<int> x(M), y(M);
    for (int i = 0; i < M; i++) {
        cin >> x[i] >> y[i];
        if (red_boxes.count(x[i]) != 0) {
            red_boxes.insert(y[i]);
            if (red_boxes.size() == N) {
                break;
            }
        }
    }

    cout << red_boxes.size() << endl;
    
    return 0;
}