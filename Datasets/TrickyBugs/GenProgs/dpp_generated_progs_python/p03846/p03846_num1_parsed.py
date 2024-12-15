MOD = 10**9 + 7

def count_possible_orders(N, A):
    # Count the number of occurrences for each absolute difference
    diff_count = [0] * (N+1)
    for i in A:
        diff_count[i] += 1

    # Initialize the answer with 1 (for the empty row)
    ans = 1

    # Iterate over each absolute difference
    for i, count in enumerate(diff_count):
        # If there are no occurrences of this absolute difference, continue to the next one
        if count == 0:
            continue

        # If the absolute difference is odd and there is only one occurrence, it is not possible to have a valid order
        if i % 2 == 1 and count == 1:
            return 0

        # If the absolute difference is even, multiply the answer by the factorial of half the count
        if i % 2 == 0:
            ans = (ans * factorial(count // 2)) % MOD

    return ans

def factorial(n):
    res = 1
    for i in range(1, n+1):
        res = (res * i) % MOD
    return res

# Read input
N = int(input())
A = list(map(int, input().split()))

# Calculate and print the number of possible orders
print(count_possible_orders(N, A))