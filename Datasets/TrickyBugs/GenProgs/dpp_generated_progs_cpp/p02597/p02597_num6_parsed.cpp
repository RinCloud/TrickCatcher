#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    string stones;
    cin >> stones;

    int count_w = 0; // count of white stones to the left of a red stone
    int result = 0; // minimum number of operations needed

    for (int i = 0; i < N; i++) {
        if (stones[i] == 'W') {
            count_w++;
        } else if (count_w > 0) {
            count_w--;
            result++;
        }
    }

    cout << result << endl;

    return 0;
}