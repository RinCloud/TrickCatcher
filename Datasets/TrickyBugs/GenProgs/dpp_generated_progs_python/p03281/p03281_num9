import math

def count_odd_numbers_with_eight_divisors(N):
    count = 0
    
    for i in range(1, N+1):
        if math.sqrt(i).is_integer():
            continue
        
        divisors = 0
        for j in range(1, int(math.sqrt(i))+1):
            if i % j == 0:
                if j % 2 == 1:
                    divisors += 1
                if j != i // j and i // j % 2 == 1:
                    divisors += 1
        
        if divisors == 8:
            count += 1
    
    return count

N = int(input())
print(count_odd_numbers_with_eight_divisors(N))