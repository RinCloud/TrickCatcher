x = int(input())

# Number of operations needed to achieve x points
operations = (x // 11) * 2

# Check if there are any remaining points that require additional operations
remainder = x % 11
if remainder == 0:
    pass
elif remainder <= 6:
    operations += 1
else:
    operations += 2

print(operations)