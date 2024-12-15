S = input()

# Count the number of different color pairs
count = 0
for i in range(1, len(S)):
    if S[i] != S[i-1]:
        count += 1

# Since each new stone will change the color of both ends,
# the minimum number of new stones needed is half of the count
min_stones = (count + 1) // 2

print(min_stones)