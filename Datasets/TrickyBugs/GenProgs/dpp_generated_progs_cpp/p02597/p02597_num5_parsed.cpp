#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    string c;
    cin >> c;

    int ans = 0;
    int red_count = count(c.begin(), c.end(), 'R');
    int white_count = N - red_count;
    int disaster_count = 0;

    for(int i = N - 1; i >= 0; i--) {
        if(c[i] == 'W') {
            disaster_count++;
        }
        else {
            ans += min(disaster_count, white_count);
            red_count--;
        }
    }

    cout << ans << endl;

    return 0;
}
