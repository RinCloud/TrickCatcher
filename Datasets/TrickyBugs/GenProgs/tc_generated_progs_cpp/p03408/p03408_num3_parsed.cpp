#include <bits/stdc++.h>
using namespace std;

map<string, int> m;
string str[120];

int main(){
    int n, m, ma = 0, i;
    string st;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        char s[100];
        scanf("%s", s);
        str[i] = s;
        m[str[i]]++;
    }
    scanf("%d", &m); // Use separate variable for red card count
    for(i = 1; i <= m; i++){ // Use separate variable for red card loop
        char s[100];
        scanf("%s", s);
        st = s;
        m[st]--;
    }
    for(i = 1; i <= n; i++){
        if(m[str[i]] > ma) ma = m[str[i]];
    }
    printf("%d",ma);
}
