x = int(input())
operations = 0

if x <= 6:
    operations = 1
else:
    operations = (x // 11) * 2
    remainder = x % 11
    if remainder > 0:
        operations += 1
        if remainder > 6:
            operations += 1

print(operations)