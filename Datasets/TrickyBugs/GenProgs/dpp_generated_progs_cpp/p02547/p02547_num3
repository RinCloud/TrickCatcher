#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int dice[N][2];
    for(int i=0; i<N; i++) {
        cin >> dice[i][0] >> dice[i][1];
    }

    bool found = false;
    for(int i=0; i<N-2; i++) {
        if(dice[i][0] == dice[i][1] && dice[i+1][0] == dice[i+1][1] && dice[i+2][0] == dice[i+2][1]) {
            found = true;
            break;
        }
    }

    if(found) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}