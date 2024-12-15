#include <iostream>
#include <vector>

using namespace std;

int main() {
    int H, W, N;
    cin >> H >> W >> N;

    vector<vector<int>> grid(H, vector<int>(W, 0));

    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        grid[a-1][b-1] = 1;
    }

    vector<int> counts(10, 0);

    for (int i = 0; i < H-2; i++) {
        for (int j = 0; j < W-2; j++) {
            int sum = 0;
            for (int k = i; k < i+3; k++) {
                for (int l = j; l < j+3; l++) {
                    sum += grid[k][l];
                }
            }
            counts[sum]++;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << counts[i] << endl;
    }

    return 0;
}