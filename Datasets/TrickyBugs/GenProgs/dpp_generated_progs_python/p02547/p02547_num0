# Here is the python code for given problem

N = int(input())
D = []

for _ in range(N):
    D.append(list(map(int, input().split())))

for i in range(N-2):
    if D[i][0] == D[i][1] and D[i+1][0] == D[i+1][1] and D[i+2][0] == D[i+2][1]:
        print("Yes")
        break
else:
    print("No")