# Taking the input from user
N, K, Q = map(int, input().split())
A = list(map(int, input().split()))

# Finding the smallest elements in each subsequence
min_elements = []
for i in range(N-K+1):
    subsequence = sorted(A[i:i+K])
    min_elements.append(subsequence[0])

# Sorting the minimum elements in ascending order
min_elements.sort()

# Subtracting the largest and smallest removed elements
smallest_difference = min_elements[Q-1] - min_elements[0]
print(smallest_difference)