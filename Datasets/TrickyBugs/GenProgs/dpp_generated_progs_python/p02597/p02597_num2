N = int(input())
stones = input()

# Count the number of white stones immediately to the left of red stones
count = 0
for i in range(N-1):
    if stones[i] == 'W' and stones[i+1] == 'R':
        count += 1

# Output the number of operations needed to remove these white stones
print(count)