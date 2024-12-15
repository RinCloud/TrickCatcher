# Reading input
N = int(input())
A = list(map(int, input().split()))

# Counting the number of negative integers
neg_count = sum(1 for a in A if a < 0)

# If there are even number of negative integers, the final sequence will be same as input sequence
if neg_count % 2 == 0:
    result = sum(abs(a) for a in A)
# If there are odd number of negative integers, we need to make the largest negative integers positive
else:
    min_abs = float('inf')
    result = 0
    for a in A:
        result += abs(a)
        min_abs = min(min_abs, abs(a))
    result -= 2 * min_abs

print(result)