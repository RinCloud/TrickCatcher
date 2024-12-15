#include <iostream>
using namespace std;
int main(){
    int X,b = 0;
    cin>>X;
    while(X>b*(b+1)/2){
        b++;
    }
    cout<<b<<endl;
}