#include <iostream>
#include <string>
using namespace std;

bool isPossibleToObtainString(string s) {
    int n = s.length();
    
    // Base case: if length of s is 0, return true
    if(n == 0)
        return true;
    
    // Check if s ends with dream, dreamer, erase or eraser
    if(n >= 5 && s.substr(n-5, 5) == "dream")
        return isPossibleToObtainString(s.substr(0, n-5));
    
    if(n >= 7 && s.substr(n-7, 7) == "dreamer")
        return isPossibleToObtainString(s.substr(0, n-7));
    
    if(n >= 5 && s.substr(n-5, 5) == "erase")
        return isPossibleToObtainString(s.substr(0, n-5));
    
    if(n >= 6 && s.substr(n-6, 6) == "eraser")
        return isPossibleToObtainString(s.substr(0, n-6));
    
    // If none of the above conditions are true, return false
    return false;
}

int main() {
    string s;
    cin >> s;
    
    if(isPossibleToObtainString(s))
        cout << "YES" <<endl;
    else
        cout << "NO" <<endl;
    
    return 0;
}