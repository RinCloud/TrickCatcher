# Approach:
1. Sort the array A in descending order.
2. Initialize happiness to 0.
3. For each child, calculate the happiness points earned if the child is placed at position i (1-indexed) from the left.
4. Add the calculated happiness points to the total happiness.
5. Print the total happiness.

# Let's write the code now.

N = int(input())
A = list(map(int, input().split()))

A.sort(reverse=True)  # Sort the array in descending order

happiness = 0
for i in range(N):
    happiness += A[i] * abs(i + 1 - (N // 2 + 1))

print(happiness)