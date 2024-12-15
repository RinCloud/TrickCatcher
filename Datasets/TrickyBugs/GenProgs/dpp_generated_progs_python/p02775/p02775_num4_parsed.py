import math

N = int(input())

max_power = int(math.log10(N))
count = max_power

for power in range(max_power, -1, -1):
    if N >= 10**(power + 1):
        count += N // (10**(power + 1))
        N %= 10**(power + 1)
    if N >= 10**power:
        count += N // (10**power)
        N %= 10**power

print(count)