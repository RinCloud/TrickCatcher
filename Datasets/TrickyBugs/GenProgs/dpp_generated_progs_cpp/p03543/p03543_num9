#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    string str = to_string(N);
    bool isGood = false;
    for(int i = 0; i <= 1; i++) {
        if(str[i] == str[i+1] && str[i] == str[i+2]) {
            isGood = true;
            break;
        }
    }
    if(isGood)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    return 0;
}