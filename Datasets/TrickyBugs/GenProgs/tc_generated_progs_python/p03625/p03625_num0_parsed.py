n = int(input())
A = list(map(int,input().split()))

A.sort(reverse=True)
E = [0,0]

j = 0
for i in range(n):
    if E[j] == A[i]:
        j += 1
        if j == 1:
            continue
        else:
            break
    E[j] = A[i]

# Checking if a rectangle can be formed
if j < 1:
    print(0)
else:
    print(E[0]*E[1])