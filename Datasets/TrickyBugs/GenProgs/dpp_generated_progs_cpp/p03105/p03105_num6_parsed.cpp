#include <iostream>
using namespace std;
 
int main() {
    int A, B, C;
    cin >> A >> B >> C;
 
    int times = min(B / A, C);
    cout << times << endl;
 
    return 0;
}