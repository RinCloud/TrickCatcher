def find_smallest_integer(N, M, digits):
    for i in range(10**(N-1), 10**N):
        num = str(i)
        valid = True
        for s, c in digits:
            if num[s-1] != str(c):
                valid = False
                break
        if valid:
            return int(num)
    return -1

# read input
N, M = map(int, input().split())
digits = []
for _ in range(M):
    s, c = map(int, input().split())
    digits.append((s, c))

# call function and print result
result = find_smallest_integer(N, M, digits)
print(result)