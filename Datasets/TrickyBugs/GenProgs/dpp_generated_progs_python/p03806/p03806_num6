from math import gcd
package_list = []
N, M_a, M_b = map(int, input().split())
for _ in range(N):
    a, b, c = map(int, input().split())
    package_list.append((a, b, c))

min_cost = float('inf')
for i in range(N):
    a, b, c = package_list[i]
    g = gcd(M_a * b, M_b * a)
    lcm = (M_a * b * M_b * a) // g
    min_purchase = lcm // (a * M_b) + lcm // (b * M_a)
    cost = min_purchase * c
    min_cost = min(min_cost, cost)

if min_cost == float('inf'):
    print(-1)
else:
    print(min_cost)