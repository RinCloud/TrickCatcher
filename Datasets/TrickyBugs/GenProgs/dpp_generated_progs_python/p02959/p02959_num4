N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

total_monsters = 0
for i in range(N):
    defeated_monsters = min(A[i], B[i])
    total_monsters += defeated_monsters
    A[i] -= defeated_monsters
    remaining_monsters = min(A[i+1], B[i] - defeated_monsters)
    total_monsters += remaining_monsters
    A[i+1] -= remaining_monsters

print(total_monsters)