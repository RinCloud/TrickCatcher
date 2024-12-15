#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int YY = stoi(S.substr(0, 2));
    int MM = stoi(S.substr(2, 2));

    bool isYYMM = false;
    bool isMMYY = false;

    if (YY >= 1 && YY <= 12)
    {
        isYYMM = true;
    }

    if (MM >= 1 && MM <= 12)
    {
        isMMYY = true;
    }

    if (isYYMM && isMMYY)
    {
        cout << "AMBIGUOUS";
    }
    else if (isYYMM)
    {
        cout << "YYMM";
    }
    else if (isMMYY)
    {
        cout << "MMYY";
    }
    else
    {
        cout << "NA";
    }

    return 0;
}
