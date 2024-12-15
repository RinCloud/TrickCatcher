#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int num = 2;
    while (num <= N && num*2 <= N) {
        num = num * 2;
    }

    cout << num << endl;
    
    return 0;
}