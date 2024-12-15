#include <iostream>
using namespace std;

int main() {
    // Read the input values X, Y, Z
    int X, Y, Z;
    cin >> X >> Y >> Z;
    
    // Calculate the maximum number of people that can sit on the seat
    int gap = Y + 2 * Z;
    int maxPeople = (X - Z) / gap;
    
    // Print the answer
    cout << maxPeople << endl;
    
    return 0;
}