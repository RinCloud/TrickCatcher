w = input()

# Count the occurrence of each lowercase letter
count = [0] * 26
for c in w:
    index = ord(c) - ord('a')
    count[index] += 1

# Check if each lowercase letter occurs even number of times
for i in range(26):
    if count[i] % 2 != 0:
        print("No")
        exit()

print("Yes")