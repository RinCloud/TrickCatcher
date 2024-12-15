#include<iostream>
int main() {
    int A, B, C;
    std::cin >> A >> B >> C;
    std::cout << (A < B ? (C < A ? B - C : (B < C ? C - A : B - A)) : (C < B ? A - C : (A < C ? C - B : A - C)));
}
