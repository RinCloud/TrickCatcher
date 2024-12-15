#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin >> s;
    reverse(begin(s), end(s));
    int ok = 1;
    for (int i = 0; i < s.size();)
    {
        if (s[i] == 'r')
        {
            if (s.substr(i, 7) == "remaerd")
                i += 7;
            else if (s.substr(i, 6) == "resare")
                i += 6;
            else {
                ok = 0;
                break;
            }
        }
        else if (s[i] == 'e' && s.substr(i, 5) == "esare")
            i += 5;
        else if (s[i] == 'm' && s.substr(i, 5) == "maerd")
            i += 5;
        else  
        {
            ok = 0;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << endl;
}