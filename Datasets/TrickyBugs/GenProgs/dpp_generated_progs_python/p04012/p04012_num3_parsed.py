# Program

w = input()

# Create a dictionary to count the occurrence of each character
count = {}

# Count the occurrence of each lowercase letter in the string
for c in w:
    if c in count:
        count[c] += 1
    else:
        count[c] = 1

# Check if the count of each letter is even
for value in count.values():
    if value % 2 != 0:
        print('No')
        break
else:
    print('Yes')