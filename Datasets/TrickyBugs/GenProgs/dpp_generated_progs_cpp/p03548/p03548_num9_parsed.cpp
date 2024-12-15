#include <iostream>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    int gap = Y + 2 * Z; // total occupied space by each person
    int maxPeople = (X - Z) / gap; // maximum number of people that can fit
    cout << maxPeople << endl;

    return 0;
}