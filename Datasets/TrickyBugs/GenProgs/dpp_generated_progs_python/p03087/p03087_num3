N, Q = map(int, input().split())
S = input().strip()

# prefix sum for counting occurrences of 'AC'
count = [0] * (N+1)
for i in range(1, N):
    count[i+1] = count[i] + (S[i-1:i+1] == 'AC')

# answer the Q queries
for _ in range(Q):
    l, r = map(int, input().split())
    print(count[r] - count[l])