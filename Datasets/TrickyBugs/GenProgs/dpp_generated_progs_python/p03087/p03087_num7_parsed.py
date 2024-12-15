N, Q = map(int, input().split())
S = input()
queries = []
for _ in range(Q):
    queries.append(list(map(int, input().split())))

count = [0] * N

for i in range(1, N):
    count[i] = count[i-1]
    if S[i-1:i+1] == 'AC':
        count[i] += 1

for query in queries:
    l, r = query
    print(count[r-1] - count[l-1])