#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int price = 700;  // base price for ramen

    if (S[0] == 'o') {
        price += 100;  // add 100 yen for boiled egg
    }
    if (S[1] == 'o') {
        price += 100;  // add 100 yen for sliced pork
    }
    if (S[2] == 'o') {
        price += 100;  // add 100 yen for green onions
    }

    cout << price << endl;

    return 0;
}