import random

def get_minimum_final_health(N, monster_health):
    while len(monster_health) > 1:
        # Select a random attacking monster
        attacking_monster = random.choice(monster_health)

        # Select a random target monster (which is not the attacking monster)
        target_monster = random.choice([monster for monster in monster_health if monster != attacking_monster])
        
        # Reduce the health of the target monster by the current health of the attacking monster
        target_monster -= attacking_monster
        
        # Update the health of the target monster in the list
        monster_health.remove(attacking_monster)
        monster_health.append(target_monster)
    
    return monster_health[0]

# Read input from stdin
N = int(input())
monster_health = list(map(int, input().split()))

# Get the minimum possible final health of the last monster alive
minimum_final_health = get_minimum_final_health(N, monster_health)

# Print the minimum possible final health
print(minimum_final_health)