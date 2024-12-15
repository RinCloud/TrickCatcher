#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    long long int H, W, N;
    cin >> H >> W >> N;
    vector<long long int> a(N), b(N);
    map<pair<long long int, long long int>, int> blackCount;
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
        for (int dx = -2; dx <= 0; dx++) {
            for (int dy = -2; dy <= 0; dy++) {
                int nx = a[i] + dx;
                int ny = b[i] + dy;
                if (0 <= nx && nx + 2 < H && 0 <= ny && ny + 2 < W) {
                    blackCount[make_pair(nx, ny)]++;
                }
            }
        }
    }
    vector<long long int> count(10);
    long long int total = 0;
    for (auto bc : blackCount) {
        count[bc.second]++;
        total++;
    }
    count[0] = (H - 2) * (W - 2) - total;
    for (int i = 0; i < 10; i++) {
        cout << count[i] << '\n';
    }
    return 0;
}