N, start = map(int, input().split())
D = list(map(int, input().split()))
Q = int(input())
queries = list(map(int, input().split()))

queries = [(k-1, i) for i, k in enumerate(queries)]
queries.sort()

P = [start]
for d in D:
    a = P[-1]
    b = abs(a - d)
    P.append(min(a, b))

result = [None]*len(queries)

x = 1

for i, d in enumerate(reversed(D)):
    if queries[-1][0] == N-(i+1):
        result[queries[-1][1]] = P[N-(i+1)] >= x
        queries.pop()
        if not queries:
            break

    if abs(x - d) < x:
        x += d

for r in result:
    print('YES' if r else 'NO')