#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> s(M), c(M);
    for(int i = 0; i < M; i++) {
        std::cin >> s[i] >> c[i];
    }

    std::string result = "";
    for(int i = 0; i < N; i++) {
        result += "9";
    }

    for(int i = 0; i < M; i++) {
        if(result[N - s[i]] != '9' && result[N - s[i]] != c[i] + '0') {
            std::cout << "-1" << std::endl;
            return 0;
        }
        result[N - s[i]] = c[i] + '0';
    }

    if(result[0] == '0') {
        std::cout << "-1" << std::endl;
    } else {
        std::cout << result << std::endl;
    }

    return 0;
}