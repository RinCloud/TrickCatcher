#include <iostream>
#include <string>
using namespace std;

int main(){
    int N,Q;
    string S;
    cin >> N >> Q;
    cin >> S;
    int code[N];
    int nan=0;
    for(int i=1;i<N;i++){
        if(S[i-1]=='A'&&S[i]=='C'){
            nan++;
        }
        code[i]=nan;
    }

    for(int i=1;i<Q+1;i++){
        int l,r;
        cin >> l >> r;
        cout << code[r-1]-code[l-1] << endl;
    }   
}
