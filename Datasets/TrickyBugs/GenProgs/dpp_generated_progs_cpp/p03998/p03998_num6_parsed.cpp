#include <iostream>
#include <string>

using namespace std;

int main() {
    string s_a, s_b, s_c;
    cin >> s_a >> s_b >> s_c;

    int turn = 0;
    while (true) {
        if (turn % 3 == 0) {
            if (s_a.empty()) {
                cout << "A" << endl;
                break;
            }
            char card = s_a[0];
            s_a = s_a.substr(1);

            if (card == 'a') {
                turn++;
            } else if (card == 'b') {
                turn += 2;
            }
        } else if (turn % 3 == 1) {
            if (s_b.empty()) {
                cout << "B" << endl;
                break;
            }
            char card = s_b[0];
            s_b = s_b.substr(1);

            if (card == 'a') {
                turn--;
            } else if (card == 'c') {
                turn++;
            }
        } else {
            if (s_c.empty()) {
                cout << "C" << endl;
                break;
            }
            char card = s_c[0];
            s_c = s_c.substr(1);

            if (card == 'b') {
                turn--;
            } else if (card == 'c') {
                turn -= 2;
            }
        }
    }
    
    return 0;
}