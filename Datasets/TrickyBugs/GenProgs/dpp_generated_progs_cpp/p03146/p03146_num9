#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
    int s;
    cin >> s;
    
    unordered_set<int> sequence;
    sequence.insert(s);
    
    int n = s;
    int m = 0;
    
    while(sequence.find(n) == sequence.end()) {
        sequence.insert(n);
        if(n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        m++;
    }
    
    cout << m << endl;
    
    return 0;
}