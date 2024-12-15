from itertools import combinations

def max_cake_value(N, M, cakes):
    max_total_value = 0
    
    for i in range(1, M+1):
        for combination in combinations(cakes, i):
            total_beauty = 0
            total_tastiness = 0
            total_popularity = 0
            
            for cake in combination:
                total_beauty += abs(cake[0])
                total_tastiness += abs(cake[1])
                total_popularity += abs(cake[2])
            
            total_value = total_beauty + total_tastiness + total_popularity
            max_total_value = max(max_total_value, total_value)
    
    return max_total_value

N, M = map(int, input().split())
cakes = []
for _ in range(N):
    x, y, z = map(int, input().split())
    cakes.append((x, y, z))

print(max_cake_value(N, M, cakes))