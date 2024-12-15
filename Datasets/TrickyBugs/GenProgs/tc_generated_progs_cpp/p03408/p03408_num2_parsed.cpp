#include <bits/stdc++.h>

int main() {
    int N;
    std::cin >> N;
    std::map<std::string, int> m;
    std::string str[120];
    for (int i = 1; i <= N; i++) {
        std::string s;
        std::cin >> s;
        str[i] = s;
        m[str[i]]++;
    }
    int M;
    std::cin >> M;
    for (int i = 1; i <= M; i++) {
        std::string s;
        std::cin >> s;
        m[s]--;
    }
    int ma = 0;
    for (int i = 1; i <= N; i++) {
        if (m[str[i]] > 0)
            ma = std::max(ma, m[str[i]]);
    }
    std::cout << ma << std::endl;
    return 0;
}
