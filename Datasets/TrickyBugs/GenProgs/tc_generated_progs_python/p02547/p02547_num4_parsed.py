N = int(input())
doublets = []
for _ in range(N):
    D = input().split()
    doublets.append(D[0] == D[1])
    
if any(doublets[i] and doublets[i+1] and doublets[i+2] for i in range(N-2)):
    print("Yes")
else:
    print("No")
