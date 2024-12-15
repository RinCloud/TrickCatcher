# Python program to calculate the minimum possible sadness of Snuke

def min_sadness(N, A):
    min_sadness = float('inf')
    
    for i in range(1, N + 1):
        b = A[i - 1] - i
        sadness = 0
        
        for j in range(N):
            sadness += abs(A[j] - (b + j + 1))
        
        min_sadness = min(min_sadness, sadness)
    
    return min_sadness


# Read input from standard input
N = int(input())
A = list(map(int, input().split()))

# Call the min_sadness function and print the result
print(min_sadness(N, A))