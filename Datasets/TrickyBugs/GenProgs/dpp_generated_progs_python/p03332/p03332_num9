# Approach:
- Since the beauty of the tower is the sum of the scores of the N layers, we can make use of combinations to calculate the scores.
- We need to calculate the number of ways to paint the tower such that the beauty of the tower becomes exactly K.
- We can iterate through all possible ways of painting the tower and keep count of the number of ways to achieve a beauty score of K.
- Iterate through all possible counts of red layers, say i (0 <= i <= N), and calculate the corresponding counts of green and blue layers, j and k (0 <= j, k <= N - i).
- Check if the beauty score for this combination of counts of red, green, and blue layers is equal to K.
- If it is equal, increment the count of ways.
- Finally, print the count of ways modulo 998244353.

# Let's write the code to implement this approach:

import math

def count_ways(N, A, B, K):
    count = 0
    
    for i in range(N + 1):
        for j in range(N - i + 1):
            k = N - i - j
            score = i * A + j * (A + B) + k * B

            if score == K:
                combinations = math.comb(N, i) * math.comb(N - i, j)
                count += combinations
    
    return count % 998244353

# Read the input
N, A, B, K = map(int, input().split())

# Call the count_ways function
result = count_ways(N, A, B, K)

# Print the result
print(result)