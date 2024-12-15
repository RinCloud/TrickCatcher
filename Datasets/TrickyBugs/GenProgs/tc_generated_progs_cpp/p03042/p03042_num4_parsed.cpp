#include <iostream> 
using namespace std;
int main()
{
    string s; 
    cin >> s;
    
    int a = stoi(s.substr(0, 2));
    int b = stoi(s.substr(2, 2));
    
    if(a > 0 && a < 13 && b > 0 && b < 13)
        cout << "AMBIGUOUS";
    else if((a == 0 || a > 12) && (b == 0 || b > 12))
        cout << "NA";
    else if(a > 0 && a < 13)
        cout << "MMYY";
    else
        cout << "YYMM";
}
