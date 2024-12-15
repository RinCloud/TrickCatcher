def find_smallest_difference(N, K, Q, A):
    min_difference = float('inf')
    for i in range(N - K + 1):
        subsequence = A[i:i + K]
        min_element = min(subsequence)
        max_element = max(subsequence)
        difference = max_element - min_element
        min_difference = min(min_difference, difference)
    return min_difference

N, K, Q = map(int, input().split())
A = list(map(int, input().split()))

result = find_smallest_difference(N, K, Q, A)
print(result)