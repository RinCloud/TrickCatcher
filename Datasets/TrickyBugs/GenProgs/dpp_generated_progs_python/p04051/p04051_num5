from collections import Counter

def calculate_skewer_meals(N, packs):
    MOD = 10 ** 9 + 7
    
    # Count the frequencies of the number of beef and green pepper pieces
    beef_freq = Counter()
    green_pepper_freq = Counter()
    
    for beef, green_pepper in packs:
        beef_freq[beef] += 1
        green_pepper_freq[green_pepper] += 1
        
    # Calculate the number of skewer meals
    skewer_meals = 1
    
    for count in beef_freq.values():
        skewer_meals *= count + 1
        skewer_meals %= MOD
        
    for count in green_pepper_freq.values():
        skewer_meals *= count + 1
        skewer_meals %= MOD
        
    # Subtract 1 to exclude the case of no skewers and no pieces of food
    skewer_meals -= 1
    skewer_meals %= MOD
    
    return skewer_meals


# Read input from standard input
N = int(input())
packs = []

for _ in range(N):
    A, B = map(int, input().split())
    packs.append((A, B))

# Calculate and print the number of skewer meals
result = calculate_skewer_meals(N, packs)
print(result)