import sys

def min_attacks(N, H, katana):
    min_attacks = sys.maxsize

    for i in range(2**N):
        total_damage = 0
        attacks = 0

        for j in range(N):
            if (i >> j) & 1:
                total_damage += katana[j][1]
                attacks += 1

        if total_damage >= H:
            min_attacks = min(min_attacks, attacks)

    return min_attacks

N, H = map(int, input().split())
katana = []

for _ in range(N):
    a, b = map(int, input().split())
    katana.append((a, b))

print(min_attacks(N, H, katana))