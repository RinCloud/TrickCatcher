#include<iostream>
#include<string>

using namespace std;

int main() {
    string S;
    cin >> S;
    
    int count_black = 0;
    int count_white = 0;
    
    for(char c : S) {
        if(c == 'B') {
            count_black++;
        } else if(c == 'W') {
            count_white++;
        }
    }
    
    if(count_black == 0 || count_white == 0) {
        cout << 0 << endl;
    } else if(count_black % 2 == 0) {
        cout << count_black / 2 << endl;
    } else {
        cout << (count_black + 1) / 2 << endl;
    }
    
    return 0;
}