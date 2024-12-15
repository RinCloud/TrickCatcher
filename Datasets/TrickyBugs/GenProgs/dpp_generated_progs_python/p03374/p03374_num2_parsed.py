N, C = map(int, input().split())
sushi = []
for _ in range(N):
    x, v = map(int, input().split())
    sushi.append((x, v))

def calc_energy(sushi, C, direction):
    energy = 0
    max_energy = 0

    for x, v in sushi:
        energy += v - x * direction
        max_energy = max(max_energy, energy)

    return max_energy

clockwise_energy = calc_energy(sushi, C, 1)
counter_clockwise_energy = calc_energy(sushi[::-1], C, -1)

max_energy = max(clockwise_energy, counter_clockwise_energy)

total_energy = sum(v for _, v in sushi)

result = total_energy - max_energy

print(result)