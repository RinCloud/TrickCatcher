#include <iostream>
#include <string>
using namespace std;

string modifyString(string S)
{
    string modifiedString = "";
    for (char c : S)
    {
        int digit = c - '0';
        string repeatedDigit(digit, c);
        modifiedString += repeatedDigit;
    }
    return modifiedString;
}

int main()
{
    string S;
    long long K;
    cin >> S >> K;
    
    // Calculate the string after 5 * 10^15 days
    for (int i = 0; i < 5 * 1e15; i++)
    {
        S = modifyString(S);
    }

    // Print the K-th character from the left
    cout << S[K - 1] << endl;

    return 0;
}