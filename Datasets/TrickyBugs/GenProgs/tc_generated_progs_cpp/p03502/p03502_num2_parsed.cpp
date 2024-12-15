#include <iostream>
using namespace std;

int main(){
    int N, x, f = 0; // Initialize f as 0
    cin >> N;
    x = N;
    while(x > 0){ // Change the for loop to a while loop
        f += x % 10;
        x = x / 10;
    }
    if(N % f == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
