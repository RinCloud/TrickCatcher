#include<iostream>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;

    int count = 0;
    while(A%2 == 0 && B%2 == 0 && C%2 == 0){
        int tempA = A;
        int tempB = B;
        int tempC = C;

        A = (tempB + tempC) / 2;
        B = (tempA + tempC) / 2;
        C = (tempA + tempB) / 2;

        count++;
    }

    if(A%2 == 0 || B%2 == 0 || C%2 == 0){
        cout << -1 << endl;
    }
    else{
        cout << count << endl;
    }

    return 0;
}