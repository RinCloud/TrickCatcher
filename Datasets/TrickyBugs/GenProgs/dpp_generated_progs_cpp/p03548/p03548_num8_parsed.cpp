#include <iostream>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    // Calculate the maximum number of people that can be seated
    int maxPeople = (X - Z) / (Y + Z);

    cout << maxPeople << endl;

    return 0;
}