# I will read the input values
n, q = map(int, input().split())
colors = list(map(int, input().split()))

# I will create a set to store the unique colors for each query
unique_colors = []

# I will iterate over each query
for _ in range(q):
    l, r = map(int, input().split())
    
    # I will use a set to remove duplicates and store unique colors
    unique = set()
    for i in range(l, r+1):
        unique.add(colors[i-1])
    unique_colors.append(len(unique))

# I will print the unique colors for each query
for ans in unique_colors:
    print(ans)