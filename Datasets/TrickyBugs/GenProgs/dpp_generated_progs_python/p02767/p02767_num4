import math

def calculate_stamina(N, coordinates):
    min_stamina = math.inf
    
    for i in range(min(coordinates), max(coordinates) + 1):
        stamina = sum([(x - i)**2 for x in coordinates])
        min_stamina = min(min_stamina, stamina)
    
    return min_stamina

N = int(input())
coordinates = list(map(int, input().split()))

result = calculate_stamina(N, coordinates)
print(result)