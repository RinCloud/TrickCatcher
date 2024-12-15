def find_maximum_k(S):
    count_0 = S.count('0')
    count_1 = S.count('1')
    return min(count_0, count_1)

S = input().strip()
result = find_maximum_k(S)
print(result)