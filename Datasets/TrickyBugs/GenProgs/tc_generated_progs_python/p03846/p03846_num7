MOD = (10**9) + 7

def possible_orders(N, A):
    counts = [0] * N
    for i in range(N):
        counts[abs(i - A[i])] += 1

    if N % 2 == 0:
        for i in range(N // 2):
            if counts[i] != 2:
                return 0
        return pow(2, N // 2, MOD)
    else:
        if counts[0] != 1:
            return 0
        for i in range(1, N // 2 + 1):
            if counts[i] != 2:
                return 0
        return pow(2, (N - 1) // 2, MOD)

# Read input
N = int(input())
A = list(map(int, input().split()))

# Calculate and print the answer
print(possible_orders(N, A))