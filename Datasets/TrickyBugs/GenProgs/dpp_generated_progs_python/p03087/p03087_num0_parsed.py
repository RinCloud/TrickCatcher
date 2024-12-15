N, Q = map(int, input().split())
S = input().strip()

# Count the occurrences of `AC` in each substring
prefix_sum = [0] * N
for i in range(1, N):
    prefix_sum[i] = prefix_sum[i-1]
    if S[i-1:i+1] == 'AC':
        prefix_sum[i] += 1

# Process each query
for _ in range(Q):
    l, r = map(int, input().split())
    l -= 1
    r -= 2 # Adjust the end index to match the prefix sum array
    count = prefix_sum[r] if l == 0 else prefix_sum[r] - prefix_sum[l-1]
    print(count)