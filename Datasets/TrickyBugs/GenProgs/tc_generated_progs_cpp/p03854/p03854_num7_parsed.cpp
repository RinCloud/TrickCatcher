#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    reverse(begin(s), end(s));
    int ok = 1;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == 'r')
        {
            if (s.substr(i, 5) == "remae")
                i += 5;
            else if (s.substr(i, 5) == "resae")
                i += 5;
        }
        else if (s[i] == 'e' && s.substr(i, 5) == "maerd")
            i += 4;
        else  
            ok = 0;
    }
    cout << (ok ? "YES" : "NO") << endl;
}
