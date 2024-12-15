# Program:

N, x = map(int, input().split())
a = list(map(int, input().split()))

a.sort()

happy_children = 0
remaining_sweets = x

for i in range(N):
    if remaining_sweets >= a[i]:
        happy_children += 1
        remaining_sweets -= a[i]
    else:
        break

print(happy_children)