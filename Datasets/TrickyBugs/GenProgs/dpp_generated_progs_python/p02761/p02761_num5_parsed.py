def find_integer(N, M, digit_list):
    for i in range(10 ** (N - 1), 10 ** N):
        num_str = str(i)
        flag = True
        for s, c in digit_list:
            if int(num_str[s-1]) != c:
                flag = False
                break
        if flag:
            return i
    return -1

N, M = map(int, input().split())
digit_list = []
for _ in range(M):
    s, c = map(int, input().split())
    digit_list.append((s, c))

result = find_integer(N, M, digit_list)
print(result)
