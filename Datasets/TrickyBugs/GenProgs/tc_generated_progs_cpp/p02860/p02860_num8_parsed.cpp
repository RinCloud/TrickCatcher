#include<iostream>
#include<string>
using namespace std;

int main(){
    int N;
    string S;
    cin>>N>>S;

    if(S.rfind(S.substr(0,N/2)) == N/2 && N%2 == 0) {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
}