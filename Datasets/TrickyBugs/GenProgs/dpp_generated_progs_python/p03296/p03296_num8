# Taking input
N = int(input())
a = list(map(int, input().split()))

# Initializing counters
count = 0
prev_color = []

# Iterating through each slime
for slime in a:
    # If the color has not been seen before
    if slime not in prev_color:
        prev_color.append(slime)
    # If the color has been seen before, changing the color
    else:
        count += 1

# Printing the minimum number of spells required
print(count)