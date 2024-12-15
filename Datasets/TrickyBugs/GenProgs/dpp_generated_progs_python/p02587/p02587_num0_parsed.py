# Start #

#Input
N = int(input())
costs = []
for _ in range(N):
    S, C = input().split()
    costs.append((S, int(C)))


#Helper Functions
def is_palindrome(string):
    return string == string[::-1]


#Main Logic
min_cost = float('inf')
for i in range(1, 2**(N+1)):
    selected_strings = []
    total_cost = 0
    for j in range(N):
        if (i >> j) & 1:
            selected_strings.append(costs[j][0])
            total_cost += costs[j][1]
    palindrome = ''.join(selected_strings)
    if is_palindrome(palindrome):
        min_cost = min(min_cost, total_cost)
    
if min_cost == float('inf'):
    min_cost = -1
print(min_cost)