N, K = map(int, input().split())
S = input()

devices = list(S)

for _ in range(K):
    if devices[0] == 'A':
        devices[0] = 'B'
    else:
        devices[0] = 'A'

    for i in range(1, N):
        if devices[i] == 'A':
            if devices[i-1] == 'A':
                devices[i] = 'B'
            else:
                devices[i] = 'A'
        else:
            if devices[i-1] == 'A':
                devices[i] = 'A'
            else:
                devices[i] = 'B'

output = "".join(devices)
print(output)