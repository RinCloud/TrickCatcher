#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int count = 0;
    for(int i = 1; i <= N; i++) {
        int num = i;
        int digitCount = 0;

        while(num > 0) {
            num /= 10;
            digitCount++;
        }

        if(digitCount % 2 == 1)
            count++;
    }

    cout << count << endl;

    return 0;
}