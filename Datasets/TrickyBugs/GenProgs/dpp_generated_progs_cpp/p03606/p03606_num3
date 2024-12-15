#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int seats[100001] = {0}; // array to keep track of seats
    
    for(int i=0; i<N; i++) {
        int l, r;
        cin >> l >> r;
        
        for(int j=l; j<=r; j++) {
            seats[j] = 1; // mark occupied seats as 1
        }
    }
    
    int count = 0;
    for(int i=1; i<=100000; i++) {
        if(seats[i] == 1) {
            count++; // increment count for each occupied seat
        }
    }
    
    cout << count << endl;
    
    return 0;
}