def minimum_attacks(N, H, katanas):
    min_attacks = float('inf')
    for i in range(2 ** N):
        wield_damage = 0
        throw_damage = 0
        attacks = 0
        for j in range(N):
            if (i >> j) & 1:
                wield_damage += katanas[j][0]
                attacks += 1
            else:
                throw_damage += katanas[j][1]
        if wield_damage >= H:
            min_attacks = min(min_attacks, attacks)
        elif throw_damage >= H:
            min_attacks = min(min_attacks, attacks + 1)
    return min_attacks


N, H = map(int, input().split())
katanas = []
for _ in range(N):
    a, b = map(int, input().split())
    katanas.append((a, b))

result = minimum_attacks(N, H, katanas)
print(result)