#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s;
    int a = 0; // initialize a to 0
    for(int i=0; i<4; i++)
    {
        cin >> s;
        if(s=='+')
            a += 1;
        else if(s=='-') // use else if instead of if to avoid executing the second if condition if the first one is true
            a -= 1;
    }
    cout << a;
}
