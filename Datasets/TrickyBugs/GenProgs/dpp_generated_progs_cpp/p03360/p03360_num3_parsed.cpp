#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int A, B, C, K;
    std::cin >> A >> B >> C >> K;

    std::vector<int> nums = {A, B, C};
    std::sort(nums.begin(), nums.end(), std::greater<int>());

    for (int i = 0; i < K; i++) {
        nums[0] *= 2;
    }

    int sum = 0;
    for (int num : nums) {
        sum += num;
    }

    std::cout << sum << std::endl;

    return 0;
}