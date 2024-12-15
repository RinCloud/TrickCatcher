#include<iostream>
#include<string>
using namespace std;

int main() {
    string S;
    cin >> S;
    
    int len = S.length();
    bool is_even = true;
    bool is_playable = true;
    
    for(int i=0; i<len; i++) {
        if(is_even && (S[i] == 'L')) {
            is_playable = false;
            break;
        }
        if(!is_even && (S[i] == 'R')) {
            is_playable = false;
            break;
        }
        
        is_even = !is_even;
    }
    
    if(is_playable) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    
    return 0;
}