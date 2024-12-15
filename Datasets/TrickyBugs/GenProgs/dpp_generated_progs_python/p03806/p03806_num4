from math import gcd

def calculate_min_cost(N, M_a, M_b, packages):
    min_cost = float('inf')

    for package in packages:
        a, b, c = package

        if (a * M_b - b * M_a) % gcd(M_a, M_b) != 0:
            continue

        k = (a * M_b - b * M_a) // gcd(M_a, M_b)
        cost = c * (M_a + M_b) // gcd(M_a, M_b)
        min_cost = min(min_cost, cost)

    return min_cost if min_cost != float('inf') else -1


N, M_a, M_b = map(int, input().split())
packages = []
for _ in range(N):
    a, b, c = map(int, input().split())
    packages.append((a, b, c))

print(calculate_min_cost(N, M_a, M_b, packages))