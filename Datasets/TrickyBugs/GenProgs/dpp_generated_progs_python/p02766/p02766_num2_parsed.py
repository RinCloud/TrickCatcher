# Reading N and K from input
N, K = map(int, input().split())

# Initializing count of digits to 0
count = 0

# Repeatedly dividing N by K until N becomes 0
while N > 0:
    N //= K
    count += 1

# Printing the count of digits
print(count)