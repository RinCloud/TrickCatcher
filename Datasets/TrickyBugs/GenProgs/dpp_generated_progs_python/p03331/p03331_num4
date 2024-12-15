n = int(input())
min_sum = float('inf')

for i in range(1, n):
    a = i
    b = n - i
    
    digit_sum = sum(map(int, str(a))) + sum(map(int, str(b)))
    
    min_sum = min(min_sum, digit_sum)

print(min_sum)