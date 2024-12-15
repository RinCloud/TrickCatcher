#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    if (A == B)
    {
        cout << "Draw";
    }
    else if ((A == 1 && B != 13) || (A != 13 && B == 1))
    {
        cout << "Alice";
    }
    else if (A > B)
    {
        cout << "Alice";
    }
    else
    {
        cout << "Bob";
    }
}
