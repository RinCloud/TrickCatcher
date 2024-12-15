#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int price = 700; // base price for ramen

    // check each character in S and add appropriate topping prices
    if (S[0] == 'o') {
        price += 100; // add boiled egg topping price
    }
    if (S[1] == 'o') {
        price += 100; // add sliced pork topping price
    }
    if (S[2] == 'o') {
        price += 100; // add green onions topping price
    }

    cout << price << endl;

    return 0;
}