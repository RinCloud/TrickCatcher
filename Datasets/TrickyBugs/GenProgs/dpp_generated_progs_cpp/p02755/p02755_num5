#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int A,B;
    cin>>A>>B;

    int price = -1;
    for(int i=1; i<=100; i++){
        int tax_8 = i * 8 / 100;
        int tax_10 = i * 10 / 100;

        if(tax_8 == A && tax_10 == B){
            price = i;
            break;
        }
    }

    cout<<price<<endl;

    return 0;
}