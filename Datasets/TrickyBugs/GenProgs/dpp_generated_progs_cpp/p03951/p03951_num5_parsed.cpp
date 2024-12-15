#include <iostream>
#include <string>

int main() {
    int N;
    std::string s, t;
    std::cin >> N >> s >> t;

    int length = N;
    std::string shortestString = s + t.substr(N);

    if (shortestString.length() < length) {
        length = shortestString.length();
    }

    std::cout << length << std::endl;

    return 0;
}