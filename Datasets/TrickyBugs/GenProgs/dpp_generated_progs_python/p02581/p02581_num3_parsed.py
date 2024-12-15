# Program to find the maximum number of points that can be gained

def max_points(N, A):
    freq = [0] * (N+1)
    for num in A:
        freq[num] += 1
    
    max_points = 0
    for i in range(1, N+1):
        max_points = max(max_points, freq[i])
    
    return max_points

# Getting the input
N = int(input())
A = list(map(int, input().split()))

# Calling the function and printing the result
print(max_points(N, A))