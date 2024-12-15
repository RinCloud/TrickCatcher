#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> boxes(N, 1);
    unordered_set<int> candidates;
    candidates.insert(1);
    
    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        if (boxes[x-1] == 1) {
            candidates.erase(x);
            candidates.insert(y);
        }
        boxes[x-1]--;
        boxes[y-1]++;
    }
    
    cout << candidates.size() << endl;
    
    return 0;
}