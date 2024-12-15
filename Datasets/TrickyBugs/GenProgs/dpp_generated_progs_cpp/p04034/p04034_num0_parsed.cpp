#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> boxes(N, 1); // Initialize all boxes with white balls
    boxes[0] = 2; // Setting box 1 with a red ball

    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;

        boxes[x-1]--; // Remove a ball from box x
        boxes[y-1]++; // Add a ball to box y
        if (boxes[x-1] == 0) {
            boxes[x-1] = -1; // Mark box x as empty
        }
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (boxes[i] > 0) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}