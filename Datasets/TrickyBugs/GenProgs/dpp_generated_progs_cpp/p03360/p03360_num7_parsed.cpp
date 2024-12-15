#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A, B, C, K;
    cin >> A >> B >> C >> K;

    // Store the values in an array
    int nums[3] = {A, B, C};

    // Sort the array in descending order
    sort(nums, nums+3, greater<int>());

    // Perform the operation K times
    for (int i = 0; i < K; i++) {
        // Double the first element in the array
        nums[0] *= 2;

        // Sort the array again to maintain descending order
        sort(nums, nums+3, greater<int>());
    }

    // Calculate the sum of the updated array
    int sum = nums[0] + nums[1] + nums[2];

    // Print the largest possible sum
    cout << sum << endl;

    return 0;
}