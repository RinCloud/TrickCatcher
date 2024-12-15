N, Q = map(int, input().split())
S = input()
queries = [list(map(int, input().split())) for _ in range(Q)]

# Preprocess the string S
count = [0] * N
for i in range(1, N):
    count[i] = count[i-1]
    if S[i-1] == 'A' and S[i] == 'C':
        count[i] += 1

# Answer the queries
for query in queries:
    l, r = query
    answer = count[r-1] - count[l-1]
    print(answer)