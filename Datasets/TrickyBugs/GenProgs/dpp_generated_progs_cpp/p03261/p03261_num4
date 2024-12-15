#include <iostream>
#include <unordered_set>
#include <string>

int main() {
    int N;
    std::cin >> N;

    std::unordered_set<std::string> words;
    std::string prev_word;
    bool isValid = true;

    for (int i = 0; i < N; i++) {
        std::string word;
        std::cin >> word;

        if (words.count(word) || (i > 0 && prev_word.back() != word.front())) {
            isValid = false;
            break;
        }

        words.insert(word);
        prev_word = word;
    }

    if (isValid) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}