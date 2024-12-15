def can_transform(S, T, q, queries):
    def transform_string(s):
        stack = []
        for c in s:
            if c == 'A':
                stack.append('BB')
            elif c == 'B':
                stack.append('AA')
        return ''.join(stack)

    transformed_S = transform_string(S)
    transformed_T = transform_string(T)

    results = []
    for query in queries:
        a, b, c, d = query
        if transformed_S[a-1:b] == transformed_T[c-1:d]:
            results.append("YES")
        else:
            results.append("NO")
    return results

S = input()
T = input()
q = int(input())
queries = []
for _ in range(q):
    a, b, c, d = map(int, input().split())
    queries.append((a, b, c, d))

results = can_transform(S, T, q, queries)
for result in results:
    print(result)