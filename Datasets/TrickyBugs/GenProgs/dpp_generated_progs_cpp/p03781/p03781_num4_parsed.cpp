#include<bits/stdc++.h>
using namespace std;

int main() {
    int X;
    cin >> X;

    int time = 0;
    int position = 0;

    while (position < X) {
        time++;
        position += time;
    }

    cout << time << endl;

    return 0;
}