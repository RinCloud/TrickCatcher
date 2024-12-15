w = input()

# Create a dictionary to count the occurrences of each lowercase letter
count = {}
for c in w:
    count[c] = count.get(c, 0) + 1

# Check if all occurrences are even
beautiful = all(val % 2 == 0 for val in count.values())

if beautiful:
    print('Yes')
else:
    print('No')