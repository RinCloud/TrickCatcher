n = int(input())
A = list(map(int,input().split()))

A.sort(reverse=True)
E = [0,0]

j = 0
for i in range(n):
    if E[j] == A[i]:
        j += 1
        if j == 2:
            break
    E[j] = A[i]
    
if E[0] == E[1]:
    print(E[0]*E[1])
else:
    print(0)