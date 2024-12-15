"""
# Function to count the number of subsequences with arithmetic mean >= K
def count_subsequences(N, K, a):
    count = 0  # Initialize count variable to 0
    
    for i in range(N):
        sum_val = 0
        for j in range(i, N):
            sum_val += a[j]
            mean = sum_val / (j - i + 1)
            if mean >= K:
                count += 1
    
    return count


# Get input from the user
N, K = map(int, input().split())
a = []
for _ in range(N):
    a.append(int(input()))

# Call the count_subsequences function
result = count_subsequences(N, K, a)

# Print the result
print(result)
"""