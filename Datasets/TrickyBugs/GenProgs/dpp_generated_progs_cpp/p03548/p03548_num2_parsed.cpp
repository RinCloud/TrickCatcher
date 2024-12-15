#include<iostream>
using namespace std;
 
int main(){
    int X, Y, Z;
    cin >> X >> Y >> Z;
 
    int gap = Y + 2 * Z;
    int numPeople = (X - Z) / gap;
 
    cout << numPeople << endl;
 
    return 0;
}