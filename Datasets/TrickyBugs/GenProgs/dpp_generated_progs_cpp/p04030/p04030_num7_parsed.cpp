#include <iostream>
#include <stack>
#include <string>

using namespace std;

string editorString(string s) {
    stack<char> st;
    
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '0') {
            st.push('0');
        }
        else if(s[i] == '1') {
            st.push('1');
        }
        else if(s[i] == 'B') {
            if(!st.empty()) {
                st.pop();
            }
        }
    }
    
    string result = "";
    
    while(!st.empty()) {
        result = st.top() + result;
        st.pop();
    }
    
    return result;
}

int main() {
    string s;
    cin >> s;
    
    string result = editorString(s);
    
    cout << result;
    
    return 0;
}