# Taking inputs
N, x = map(int, input().split())
a = list(map(int, input().split()))

# Sorting the list of children's sweets requirement in descending order
a.sort(reverse=True)

# Initializing the count of happy children
happy_children = 0

# Distributing sweets to children
for i in range(N):
    if x >= a[i]:
        happy_children += 1
        x -= a[i]
    else:
        break

# Printing the maximum possible number of happy children
print(happy_children)