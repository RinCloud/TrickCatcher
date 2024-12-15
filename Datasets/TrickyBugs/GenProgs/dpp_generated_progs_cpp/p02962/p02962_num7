#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int s_len = s.length();
    int t_len = t.length();

    string target = t + t;

    int max_i = -1;

    for (int i = 0; i < s_len; i++) {
        string current = s.substr(i, t_len);
        
        if (current == target) {
            int j = i + t_len;
            int copy_count = 1;

            while (j + t_len <= s_len && s.substr(j, t_len) == t) {
                j += t_len;
                copy_count++;
            }
            
            if (max_i == -1 || copy_count > max_i)
                max_i = copy_count;
        }
    }

    cout << max_i << endl;

    return 0;
}