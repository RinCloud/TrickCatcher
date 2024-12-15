
def max_monsters(N, A, B):
    max_monsters_defeated = 0
    
    for i in range(N):
        # calculate the max monsters that can be defeated by the i-th hero
        max_monsters_defeated_by_hero = min(A[i], B[i])
        
        # subtract the monsters defeated by the i-th hero from the total monsters in the current town
        A[i] -= max_monsters_defeated_by_hero
        
        # subtract the monsters defeated by the i+1-th hero from the total monsters in the next town
        A[i+1] -= min(A[i+1], B[i] - max_monsters_defeated_by_hero)
        
        # update the total number of monsters defeated
        max_monsters_defeated += max_monsters_defeated_by_hero
    
    return max_monsters_defeated

# read the input values
N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

# calculate and print the maximum total number of monsters the heroes can defeat
print(max_monsters(N, A, B))
