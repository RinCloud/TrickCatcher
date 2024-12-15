def count_assignments(K, S):
    count = 0
    for X in range(K+1):
        for Y in range(K+1):
            Z = S - (X + Y)
            if 0 <= Z <= K:
                count += 1
    return count

K, S = map(int, input().split())
result = count_assignments(K, S)
print(result)