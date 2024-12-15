N, K, Q = map(int, input().split())
A = list(map(int, input().split()))

sorted_A = sorted(A)

ans = float('inf')
for i in range(N-K+1):
    subseq = sorted_A[i:i+K]
    max_element = max(subseq)
    min_element = min(subseq)
    if subseq.index(max_element) - subseq.index(min_element) >= Q:
        ans = min(ans, max_element - min_element)

print(ans)