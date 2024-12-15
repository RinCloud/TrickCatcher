#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int s = 0; // initialize s as 0
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        
        if(a%2==0){
            if(a%3!=0 && a%5!=0){
                s++;
            }
        }
    }

    if(s>0){
        cout<<"DENIED"<<endl;
    }
    else{
        cout<<"APPROVED"<<endl;
    }
}
