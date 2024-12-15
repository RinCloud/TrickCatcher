# Taking input
N = int(input())
strings = []
for _ in range(N):
    S, C = input().split()
    strings.append([S, int(C)])

# Initialize a dictionary to store the minimum cost for each string
cost = {}

# Iterate through strings and check for each string if it can form a palindrome
for i in range(N):
    s = strings[i][0]
    c = strings[i][1]
    # Reverse the string and check if it is equal to the original string
    if s[::-1] in cost:
        # If the reversed string is already present in the dictionary, update the minimum cost
        cost[s[::-1]] = min(cost[s[::-1]], c)
    elif s in cost:
        # If the original string is already present in the dictionary, update the minimum cost
        cost[s] = min(cost[s], c)
    else:
        # If neither the original string nor the reversed string is present in the dictionary, add it to the dictionary
        cost[s] = c

# Check if there exist any string that is equal to its reverse
exist_palindrome = False
for s in cost:
    if s == s[::-1]:
        exist_palindrome = True
        break

if not exist_palindrome:
    print(-1)
else:
    # Calculate the minimum cost to form a palindrome
    min_cost = float('inf')
    for i in range(N):
        for j in range(N):
            if i != j:
                # Concatenate the strings and check if it forms a palindrome
                candidate = strings[i][0] + strings[j][0]
                if candidate == candidate[::-1]:
                    # If the concatenated string is a palindrome, calculate the cost and update the minimum cost
                    min_cost = min(min_cost, strings[i][1] + strings[j][1])

    if min_cost == float('inf'):
        print(-1)
    else:
        print(min_cost)