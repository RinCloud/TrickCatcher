from collections import defaultdict

# Function to find factorial of n
def factorial(n):
    fact = 1
    for i in range(1, n + 1):
        fact = (fact * i) % (10**9 + 7)
    return fact

# Function to calculate the number of ways
def calculate_ways(adj_list, node, parent, num_ways):
    ways = 1
    for child in adj_list[node]:
        if child != parent:
            ways = (ways * calculate_ways(adj_list, child, node, num_ways)) % (10**9 + 7)
    num_ways[node] = ways
    return (factorial(len(adj_list[node])) * ways) % (10**9 + 7)

# Function to handle each test case
def solve():
    N = int(input())
    adj_list = defaultdict(list)
    for _ in range(N - 1):
        a, b = map(int, input().split())
        adj_list[a].append(b)
        adj_list[b].append(a)
    num_ways = [0] * (N + 1)
    calculate_ways(adj_list, 1, 0, num_ways)
    for k in range(1, N + 1):
        print(num_ways[k])

# Main program
solve()