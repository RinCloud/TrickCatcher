#include<iostream>
#include<string>
using namespace std;

int main(){
    int N;
    string S;
    cin>>N>>S;

    if(S.rfind(S.substr(0,N/2))==N/2){
        cout<<"Yes"<<endl;
        return 0;
    }
    if(S.length() % 2 == 0 && S.substr(0, S.length()/2) == S.substr(S.length()/2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
