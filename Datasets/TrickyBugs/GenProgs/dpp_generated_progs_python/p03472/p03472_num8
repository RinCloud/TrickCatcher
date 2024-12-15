import sys

def min_attacks(N, H, swords):
    max_damage = max(swords, key=lambda x: x[1])
    max_damage_a = max_damage[0]
    max_damage_b = max_damage[1]
    
    num_attacks = (H + max_damage_b - 1) // max_damage_b
    remaining_damage = H - max_damage_b * (num_attacks - 1)
    
    if remaining_damage > 0:
        min_attacks = sys.maxsize
        for i in range(N):
            if swords[i][0] >= remaining_damage:
                min_attacks = min(min_attacks, num_attacks)
            else:
                min_attacks = min(min_attacks, num_attacks + (remaining_damage + swords[i][0] - 1) // swords[i][0])
        num_attacks = min_attacks
    
    return num_attacks

N, H = map(int, input().split())
swords = []
for _ in range(N):
    a, b = map(int, input().split())
    swords.append((a, b))
    
print(min_attacks(N, H, swords))