n = int(input())

def digit_sum(n):
    return sum([int(d) for d in str(n)])

max_sum = 0
for i in range(1, n+1):
    if digit_sum(i) > max_sum:
        max_sum = digit_sum(i)
        
print(max_sum)