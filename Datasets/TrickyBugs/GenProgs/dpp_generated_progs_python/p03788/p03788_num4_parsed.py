# Solution

N, K = map(int, input().split())
S = input()

devices = list(S)

for _ in range(K):
    if devices[0] == 'A':
        devices[0] = 'B'
    else:
        devices[0] = 'A'
    
    for i in range(1, N):
        if devices[i-1] == 'A':
            devices[i-1] = 'B'
        else:
            devices[i-1] = 'A'
        
        if devices[i] == 'A':
            devices[i] = 'B'
        else:
            devices[i] = 'A'

print("".join(devices))