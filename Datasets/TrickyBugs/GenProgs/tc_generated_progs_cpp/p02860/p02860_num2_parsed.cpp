#include<iostream>
#include<string>
using namespace std;

int main(){
    int N;
    string S;
    cin>>N>>S;

    string T = S.substr(0, N/2); // extract the first N/2 characters as T
    if(S == T + T){
        cout<<"Yes"<<endl;
        return 0;
    }
    cout<<"No"<<endl;
}
