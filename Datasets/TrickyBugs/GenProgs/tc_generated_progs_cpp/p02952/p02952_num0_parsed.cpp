#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    
    int count = 0;
    for (int i = 1; i <= N; i++) 
    {
        int numDigits = to_string(i).length();
        if (numDigits % 2 == 1) 
        {
            count++;
        }
    }
    
    cout << count;
    
    return 0;
}
