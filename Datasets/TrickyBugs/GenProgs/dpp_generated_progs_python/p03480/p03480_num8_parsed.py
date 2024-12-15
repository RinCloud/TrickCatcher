def find_maximum_k(S):
    n = len(S)
    count = 0
    result = 0
    for i in range(n):
        count += 1 if S[i] == '1' else -1
        if count <= 0:
            result = max(result, i + 1)
    return result

S = input().strip()
print(find_maximum_k(S))