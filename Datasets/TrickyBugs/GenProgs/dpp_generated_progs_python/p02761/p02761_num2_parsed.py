def find_smallest_integer(N, M, conditions):
    for i in range(10**(N-1), 10**N):
        integer_str = str(i)
        flag = True
        for s, c in conditions:
            if integer_str[s-1] != str(c):
                flag = False
                break
        if flag:
            return i
    return -1


N, M = map(int, input().split())
conditions = []
for _ in range(M):
    s, c = map(int, input().split())
    conditions.append((s, c))

result = find_smallest_integer(N, M, conditions)
print(result)