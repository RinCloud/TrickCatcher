from math import gcd

def generate_substance_c(N, M_a, M_b, chemicals):
    def can_generate_substance_c(M_a, M_b, chemicals):
        for i in range(N):
            if M_a * chemicals[i][1] == M_b * chemicals[i][0]:
                return True
        return False

    if can_generate_substance_c(M_a, M_b, chemicals):
        return 0

    min_cost = float('inf')
    for i in range(N):
        for j in range(N):
            a = chemicals[i][0] * M_b - chemicals[j][0] * M_a
            b = chemicals[i][1] * M_b - chemicals[j][1] * M_a
            c = chemicals[i][2] + chemicals[j][2]
            if b >= 0 and a >= 0 and gcd(a, b) == 1:
                min_cost = min(min_cost, c)

    return -1 if min_cost == float('inf') else min_cost


# read input
N, M_a, M_b = map(int, input().split())
chemicals = []
for _ in range(N):
    chemicals.append(list(map(int, input().split())))

# generate substance C and print the minimum amount of money required
print(generate_substance_c(N, M_a, M_b, chemicals))