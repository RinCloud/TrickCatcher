#include<iostream>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    char c[w];
    while (h--) {
        cin >> c;
        printf("%s\n%s\n", c, c);
    }
}