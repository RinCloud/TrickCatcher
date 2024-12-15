#include<bits/stdc++.h>
using namespace std;
int main(){
    char a[11],f[11];
    int i=0;
    cin>>f;
    for(int j=0;f[j]!='\0';j++){ // replaced 0 with '\0'
        if(f[j]=='1'){
            a[i]='1';
            i++;
        }else if(f[j]=='0'){
            a[i]='0';
            i++;
        }else{
            if(i>0){ // added condition to check if i is greater than 0
                i--;
                a[i]=0;
            }
        }
    }
    a[i]='\0'; // added '\0' at the end of a
    cout<<a;
    return 0;
}
