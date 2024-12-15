def possible_sequence(N, b):
    a = []
    for i in range(N):
        if i+1 > b[i]:
            return -1
        a.insert(b[i]-1, b[i])
    return a

N = int(input())
b = list(map(int, input().split()))

result = possible_sequence(N, b)
if result == -1:
    print(-1)
else:
    for num in result:
        print(num)