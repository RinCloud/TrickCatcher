'''
def count_subsequences(n, k, arr):
    count = 0
    for i in range(n):
        for j in range(i+1, n+1):
            # Calculate the sum of subsequence
            sub_sequence_sum = sum(arr[i:j])
            # Calculate the average of subsequence
            sub_sequence_avg = sub_sequence_sum / (j - i)
            
            if sub_sequence_avg >= k:
                count += 1
    
    return count

# Read input from standard input
n, k = map(int, input().split())
arr = []
for _ in range(n):
    arr.append(int(input()))

# Call the function and print the result
result = count_subsequences(n, k, arr)
print(result)
'''