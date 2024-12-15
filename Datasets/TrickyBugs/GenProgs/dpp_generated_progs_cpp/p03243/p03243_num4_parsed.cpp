#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int x = (N + 110) / 111 * 111;
    cout << x << endl;
    
    return 0;
}