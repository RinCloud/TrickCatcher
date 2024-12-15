'''
# Approach
We have N+M total balls, out of which N balls have even numbers and M balls have odd numbers. We need to find the number of ways to choose two balls such that the sum of the numbers on them is even.

To solve this, we need to consider the following cases:
1. If both N and M are greater than 1, then we can choose 2 even balls or 2 odd balls, in which case the sum would be even. So the count would be the product of choosing 2 balls from N and choosing 2 balls from M.

2. If either N or M is 1, then we can choose 1 even ball and 1 odd ball because the sum of even and odd is always odd. So the count in this case would be the product of choosing 1 ball from N and choosing 1 ball from M.

3. If both N and M are 0, then there are no balls to choose from and the count would be 0.

4. If either N or M is 0, then there are no balls of that type. So the count would be 0.

# Plan
1. Read the values of N and M from input.
2. Calculate the count based on the logic explained above.
3. Print the count as the output.
'''

# Step 1: Read the values of N and M from input
N, M = map(int, input().split())

# Step 2: Calculate the count based on the logic
if N > 1 and M > 1:
    count = (N * (N - 1) // 2) + (M * (M - 1) // 2)
elif N > 0 and M > 0:
    count = N * M
else:
    count = 0

# Step 3: Print the count as the output
print(count)