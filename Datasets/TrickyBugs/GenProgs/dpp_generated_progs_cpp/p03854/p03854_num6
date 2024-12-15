#include<bits/stdc++.h>
using namespace std;

bool canObtain(string S) {
    reverse(S.begin(), S.end());
    string T = "";
    string words[] = {"dream", "dreamer", "erase", "eraser"};
    for(int i = 0; i < S.size(); ) {
        bool found = false;
        for(string word : words) {
            string temp = "";
            if(i + word.size() <= S.size()) {
                for(int j = 0; j < word.size(); j++) {
                    temp += S[i+j];
                }
            }
            else {
                continue;
            }
            if(temp == word) {
                T += word;
                i += word.size();
                found = true;
                break;
            }
        }
        if(!found) {
            return false;
        }
    }
    if(T == S) {
        return true;
    }
    return false;
}

int main() {
    string S;
    cin >> S;
    if(canObtain(S)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}