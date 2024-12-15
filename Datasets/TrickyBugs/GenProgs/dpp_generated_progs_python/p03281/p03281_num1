import math

def count_numbers_with_eight_divisors(N):
    count = 0
    
    for num in range(1, N+1):
        if math.sqrt(num).is_integer():
            continue
        
        divisors = 0
        for i in range(1, int(math.sqrt(num))+1):
            if num % i == 0:
                divisors += 2
                
        if divisors == 8:
            count += 1
    
    return count


N = int(input())
print(count_numbers_with_eight_divisors(N))