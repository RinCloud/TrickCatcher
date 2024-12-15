K, N = map(int, input().split())

result = []
for i in range(N):
    result.append(K)

len_result = len(result)
middle = (len_result // 2) + (1 if len_result % 2 == 1 else 0)

for i in range(middle):
    if len(result) != N:
        result.append(K-1)
    else:
        break

print(*result)