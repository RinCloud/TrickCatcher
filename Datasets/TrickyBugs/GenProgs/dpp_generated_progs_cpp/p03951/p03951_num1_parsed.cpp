#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    string s, t;
    cin >> s >> t;
    
    string common = "";
    for (int i = 0; i < N; i++) {
        if (s.substr(i) == t.substr(0, N - i)) {
            common = s.substr(i);
            break;
        }
    }
    
    int shortest_length = N + common.length();
    cout << shortest_length;
    
    return 0;
}