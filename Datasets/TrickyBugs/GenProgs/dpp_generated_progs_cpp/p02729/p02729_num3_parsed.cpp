#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    int count = 0;
    
    // If one empty set and one odd set is chosen, sum will be odd
    count += N*(N-1)/2;
    
    // If two even sets are chosen, sum will be even
    count += M*(M-1)/2;
    
    cout << count << endl;
    
    return 0;
}