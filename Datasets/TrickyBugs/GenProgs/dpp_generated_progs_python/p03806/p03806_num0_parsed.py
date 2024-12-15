import math

def generate_substance(N, Ma, Mb, packages):
    # calculate the total amount of substance A and B needed to generate C
    total_a = Ma
    total_b = Mb
    
    for package in packages:
        total_a += package[0]
        total_b += package[1]
    
    # create a list of all possible amounts of substance A that can be obtained
    possible_a = []
    for package in packages:
        possible_a.extend([package[0]] * (total_a // package[0]))
    
    # create a list of all possible amounts of substance B that can be obtained
    possible_b = []
    for package in packages:
        possible_b.extend([package[1]] * (total_b // package[1]))
    
    min_cost = float('inf')
    
    # iterate over all possible combinations of substance A and B amounts
    for a in possible_a:
        for b in possible_b:
            # check if the ratio of A to B is equal to Ma:Mb
            if math.gcd(a, b) == 1 and a * Mb == b * Ma:
                # calculate the cost of purchasing these amounts of A and B
                cost = a * (total_a // a) + b * (total_b // b)
                min_cost = min(min_cost, cost)
    
    if min_cost == float('inf'):
        return -1
    else:
        return min_cost

# read the input values
N, Ma, Mb = map(int, input().split())
packages = []
for _ in range(N):
    a, b, c = map(int, input().split())
    packages.append((a, b, c))

# call the function and print the result
print(generate_substance(N, Ma, Mb, packages))