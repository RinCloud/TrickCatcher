#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long H, W, N;
    cin >> H >> W >> N;

    vector<vector<int>> grid(H, vector<int>(W, 0));

    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        grid[a-1][b-1] = 1;
    }

    vector<int> count(10, 0);

    for (int i = 0; i < H-2; i++) {
        for (int j = 0; j < W-2; j++) {
            int blackCount = 0;
            for (int k = i; k < i+3; k++) {
                for (int l = j; l < j+3; l++) {
                    blackCount += grid[k][l];
                }
            }
            count[blackCount]++;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << count[i] << endl;
    }

    return 0;
}