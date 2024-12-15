X = int(input())
K = int(input())
r = list(map(int, input().split()))
Q = int(input())
queries = []
for _ in range(Q):
    t, a = map(int, input().split())
    queries.append((t, a))

# Calculate how much sand is in bulb A after each reversal
sand_A = [0] * (K + 1)
sand_A[0] = X
for i in range(1, K + 1):
    sand_A[i] = sand_A[i-1] - (r[i-1] - r[i-2]) if i > 1 else sand_A[i-1] - r[0]

# Solve each query
for t, a in queries:
    if t <= r[0]:
        print(max(0, sand_A[0] - a))
    else:
        left = 0
        right = K
        while left < right:
            mid = (left + right + 1) // 2
            if r[mid - 1] <= t:
                left = mid
            else:
                right = mid - 1
        index = left

        if index == K:
            print(max(0, sand_A[-1] - (t - r[-1]) - a))
        else:
            print(max(0, sand_A[index] - (t - r[index]) - a))