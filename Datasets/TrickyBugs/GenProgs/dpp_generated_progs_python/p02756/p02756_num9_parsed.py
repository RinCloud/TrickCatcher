def apply_operation(S, T, F=None, C=None):
    if T == 1:
        S = S[::-1]
    if T == 2:
        if F == 1:
            S = C + S
        else:
            S += C
    return S

S = input().strip()
Q = int(input())
for _ in range(Q):
    query = list(map(str, input().split()))
    if len(query) == 1:
        T = int(query[0])
        S = apply_operation(S, T)
    else:
        T, F, C = map(int, query)
        S = apply_operation(S, T, F, C)
print(S)
