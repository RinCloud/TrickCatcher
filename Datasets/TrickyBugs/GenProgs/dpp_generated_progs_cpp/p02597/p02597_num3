#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    string colors;
    cin >> colors;

    int count = 0;
    int whiteCount = 0;
    for(int i = 0; i < N; i++) {
        if(colors[i] == 'W') {
            whiteCount++;
            count++;
        } else {
            if(whiteCount > 0) {
                count--;
            }
        }
    }

    cout << count << endl;

    return 0;
}