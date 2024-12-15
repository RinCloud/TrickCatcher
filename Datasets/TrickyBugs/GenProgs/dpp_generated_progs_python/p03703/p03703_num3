import sys

def count_subsequences_with_mean_greater_than_or_equal_to_k(a, k):
    n = len(a)
    count = 0
    
    for i in range(n):
        sum = 0
        for j in range(i, n):
            sum += a[j]
            mean = sum / (j - i + 1)
            if mean >= k:
                count += 1
    
    return count

if __name__ == "__main__":
    # Read input from STDIN
    n, k = map(int, input().split())
    
    a = []
    for _ in range(n):
        a.append(int(input()))
    
    # Calculate the number of subsequences
    result = count_subsequences_with_mean_greater_than_or_equal_to_k(a, k)
    
    # Print the result
    print(result)