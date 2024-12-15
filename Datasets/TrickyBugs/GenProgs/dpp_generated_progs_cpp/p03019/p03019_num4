#include <iostream>
#include <vector>
#include <algorithm>

struct Exam {
    int b, l, u;
};

int main() {
    int N, X;
    std::cin >> N >> X;

    std::vector<Exam> exams(N);
    for (int i = 0; i < N; i++) {
        std::cin >> exams[i].b >> exams[i].l >> exams[i].u;
    }

    long long hours = 0;
    long long aoki_score = 0;
    long long takahashi_score = 0;
    for (int i = 0; i < N; i++) {
        aoki_score += exams[i].b * exams[i].l;
        takahashi_score += exams[i].b * X;
    }

    if (takahashi_score >= aoki_score) {
        std::cout << 0 << std::endl;
        return 0;
    }

    while (takahashi_score < aoki_score) {
        long long min_increase = INT64_MAX;
        for (int i = 0; i < N; i++) {
            if (exams[i].l <= X && exams[i].u >= X && exams[i].u * exams[i].b - exams[i].l * exams[i].b < min_increase) {
                min_increase = exams[i].u * exams[i].b - exams[i].l * exams[i].b;
            }
        }

        if (min_increase == INT64_MAX) {
            std::cout << -1 << std::endl;
            return 0;
        }

        hours += min_increase;
        X--;

        takahashi_score = 0;
        for (int i = 0; i < N; i++) {
            takahashi_score += exams[i].b * X;
        }
    }

    std::cout << hours << std::endl;

    return 0;
}