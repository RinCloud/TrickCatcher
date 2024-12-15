#include <iostream>
#include <string>

int main()
{
    std::string S;
    int K;
    std::cin >> S >> K;

    int count = 0;
    // If K is odd, the first character of T will be different from its adjacent character
    if (K % 2 == 1)
    {
        count++;
    }
    
    // Count the number of adjacent characters in S that are the same
    int i = 1;
    while (i < S.length())
    {
        if (S[i] == S[i - 1])
        {
            count++;
            // Skip the next character as it will also be same
            i++;
        }
        i++;
    }

    // Multiply the count by half of K, as K copies of S will have K-1 adjacent pairs of the same characters
    count *= K / 2;

    std::cout << count << std::endl;

    return 0;
}