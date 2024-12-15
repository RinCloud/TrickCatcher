#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

bool check_subsequence(string a, string b) { 
    int n = a.length(); 
    int m = b.length(); 
  
    int j = 0; 
  
    for (int i=0; i<m&&j<n; i++) 
        if (a[j] == b[i]) 
            j++; 
  
    return (j==n); 
} 

int main() {
    int n, k;
    cin >> n >> k;
    vector<string> strings;
    for(int i=0 ; i<=n ; i++) {
        string s;
        cin >> s;
        strings.push_back(s);
    }

    int ans_start=-1, ans_len=-1;
    for(int i=0 ; i<strings[0].length() ; i++) {
        string prefix = strings[0].substr(0, i+1);
        for(int j=1 ; j<=n ; j++) {
            bool found = false;
            for(int k=0 ; k<strings[j].length() ; k++) {
                string sub = strings[j].substr(0, k+1);
                if(check_subsequence(prefix, sub)) {
                    found = true;
                    break;
                }
            }
            if(!found) {
                break;
            }
            if(j==n && found) {
                ans_start = i+1;
                ans_len = j;
            }
        }
    }

    string ans = strings[0].substr(0, ans_start) + "1" + strings[0].substr(ans_start);
    cout << ans << "\n";

    return 0;
}