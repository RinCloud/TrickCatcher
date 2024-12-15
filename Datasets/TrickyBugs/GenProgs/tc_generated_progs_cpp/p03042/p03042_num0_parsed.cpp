#include <iostream> 
using namespace std;
int main()
{
    string S; cin>>S;
    int a = stoi(S.substr(0, 2));
    int b = stoi(S.substr(2));
    if(a>0 and a<13 and b>0 and b<13) cout<<"AMBIGUOUS";
    else if((a==0 or a>12) and (b==0 or b>12)) cout<<"NA";
    else if(a>0 and a<13) cout<<"MMYY";
    else cout<<"YYMM";
}