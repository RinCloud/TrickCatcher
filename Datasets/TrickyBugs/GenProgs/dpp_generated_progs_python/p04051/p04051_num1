def numberOfWays(N, packs):
    total_ways = 0
    MOD = 10**9 + 7
    
    # Calculate the total number of pieces of beef and green pepper
    total_beef = sum([pack[0] for pack in packs])
    total_green_pepper = sum([pack[1] for pack in packs])
    
    # Calculate the number of ways to choose two skewer meal packs
    num_ways = (N*(N-1)) // 2
    
    # Calculate the number of ways to arrange the pieces of beef and green pepper
    num_arrangements = (total_beef+1) * (total_green_pepper+1)
    
    # Calculate the total number of ways to make a skewer meal
    total_ways = num_ways * num_arrangements % MOD
    
    return total_ways

# Sample input
N = 3
packs = [[1, 1], [1, 1], [2, 1]]

print(numberOfWays(N, packs))