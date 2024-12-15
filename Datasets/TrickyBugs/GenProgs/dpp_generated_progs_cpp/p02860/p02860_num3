#include <iostream>
#include <string>

using namespace std;

string isConcatenationOfTwoCopies(int N, string S)
{
    string T = S.substr(0, N / 2);
    string result = "No";
    
    if (S == T + T)
    {
        result = "Yes";
    }
    
    return result;
}

int main()
{
    int N;
    string S;
    
    cin >> N >> S;
    
    cout << isConcatenationOfTwoCopies(N, S) << endl;
    
    return 0;
}