import sys

def count_subsequences(n, k, a):
    count = 0
    for i in range(n):
        summation = 0
        for j in range(i, n):
            summation += a[j]
            mean = summation / (j - i + 1)
            if mean >= k:
                count += 1
    return count

# Read input from standard input
n, k = map(int, input().strip().split())
a = [int(input().strip()) for _ in range(n)]

# Call the function to count the subsequences
result = count_subsequences(n, k, a)

# Print the result
print(result)