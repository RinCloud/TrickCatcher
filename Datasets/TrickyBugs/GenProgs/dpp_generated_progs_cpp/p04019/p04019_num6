#include <iostream>
#include <vector>
using namespace std;

bool isPossibleBackHome(string s) {
    int x = 0, y = 0;
    for (char c : s) {
        if (c == 'N') y++;
        else if (c == 'W') x--;
        else if (c == 'S') y--;
        else if (c == 'E') x++;
    }
    return (x == 0 && y == 0);
}

int main() {
    string s;
    cin >> s;
  
    if (isPossibleBackHome(s))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}