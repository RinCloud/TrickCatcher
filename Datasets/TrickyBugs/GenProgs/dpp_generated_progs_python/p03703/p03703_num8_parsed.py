def number_of_subsequences(N, K, a):
    count = 0
    for i in range(N):
        sum = 0
        for j in range(i, N):
            sum += a[j]
            mean = sum / (j - i + 1)
            if mean >= K:
                count += 1
    return count

# Read input values
N, K = map(int, input().split())
a = [int(input()) for _ in range(N)]

# Call the function and print the result
result = number_of_subsequences(N, K, a)
print(result)