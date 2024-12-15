#include <iostream>
#include <string>

int main() {
    std::string s, t;
    std::cin >> s >> t;

    long long int s_len = s.length();
    long long int t_len = t.length();

    long long int lcm = (s_len * t_len) / __gcd(s_len, t_len);

    std::string new_s = "";
    for (long long int i = 0; i < lcm / s_len; i++) {
        new_s += s;
    }

    long long int index = 0; 
    long long int count = 0; 

    for (long long int i = 0; i < new_s.length(); i++) {
        if (new_s[i] == t[index]) {
            index++;
            if (index == t.length()) {
                count++;
                index = 0;
            }
        }
    }

    if (count == 0) {
        std::cout << -1 << std::endl;
    } else {
        std::cout << count * (lcm / s_len) << std::endl;
    }

    return 0;
}