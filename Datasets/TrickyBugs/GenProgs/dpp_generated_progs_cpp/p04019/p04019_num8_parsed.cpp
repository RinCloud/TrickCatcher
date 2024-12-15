#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int distance = count(s.begin(), s.end(), 'N') - count(s.begin(), s.end(), 'S');
    int distance2 = count(s.begin(), s.end(), 'W') - count(s.begin(), s.end(), 'E');
    
    if(distance == 0 && distance2 == 0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    return 0;
}