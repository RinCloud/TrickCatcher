import math

def min_stamina(N, coordinates):
    min_stamina = float('inf')
    
    for p in range(min(coordinates), max(coordinates)+1):
        stamina = sum([(x - p)**2 for x in coordinates])
        min_stamina = min(min_stamina, stamina)
    
    return min_stamina


if __name__ == "__main__":
    N = int(input())
    coordinates = list(map(int, input().split()))
    
    result = min_stamina(N, coordinates)
    print(result)