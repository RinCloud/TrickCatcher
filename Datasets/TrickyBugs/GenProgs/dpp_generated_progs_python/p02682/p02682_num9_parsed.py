A, B, C, K = map(int, input().split())

# If K is less than or equal to A, we can pick all A cards to maximize the sum
if K <= A:
    print(K)
# If K is greater than A but less than or equal to A + B, we pick all A cards and (K - A) B cards
elif K <= A + B:
    print(A)
# If K is greater than A + B but less than or equal to A + B + C, we pick all A cards, all B cards, and (K - A - B) C cards
else:
    print(A - (K - A - B))