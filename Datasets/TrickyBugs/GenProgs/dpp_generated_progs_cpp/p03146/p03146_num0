#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int s;
    cin >> s;
    
    unordered_set<int> sequence;
    sequence.insert(s);
    
    int a = s;
    int m = 1;
    
    while (true) {
        m++;
        
        if (a % 2 == 0) {
            a /= 2;
        }
        else {
            a = 3 * a + 1;
        }
        
        if (sequence.find(a) != sequence.end()) {
            break;
        }
        
        sequence.insert(a);
    }
    
    cout << m << endl;
    
    return 0;
}