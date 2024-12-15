from collections import defaultdict

def is_palindrome(s):
    return s == s[::-1]

def choose_strings(N, strings):
    # Group the strings by their reverse to check for palindrome
    groups = defaultdict(list)
    for s, cost in strings:
        groups[s[::-1]].append((s, cost))
    
    # Initialize minimum cost
    min_cost = float('inf')
    
    # Iterate over all possible palindromes
    for palindrome in groups:
        # Check if it's a palindrome without middle character
        if is_palindrome(palindrome) and len(palindrome) % 2 == 0:
            # Find the minimum cost of choosing strings to form the palindrome
            cost = 0
            middle = ""
            for s, c in groups[palindrome]:
                if s != palindrome:
                    cost += c
                else:
                    cost += c // 2
                    middle = s
            
            # Double the cost if there is a string in the middle
            if middle:
                cost *= 2
            
            # Update the minimum cost
            min_cost = min(min_cost, cost)
        
        # Check if it's a palindrome with middle character
        elif is_palindrome(palindrome) and len(palindrome) % 2 == 1:
            # Find the minimum cost of choosing strings to form the palindrome
            cost = 0
            middle = ""
            for s, c in groups[palindrome]:
                if s != palindrome:
                    num = len(s) // 2
                    cost += c * num
                else:
                    num = len(s) // 2
                    cost += c * num
                    middle = s
            
            # Double the cost if there is a string in the middle
            if middle:
                cost *= 2
            
            # Update the minimum cost
            min_cost = min(min_cost, cost)
    
    # If there is no valid palindrome, return -1
    if min_cost == float('inf'):
        return -1
    
    return min_cost


# Read input
N = int(input())
strings = []
for _ in range(N):
    s, c = input().split()
    strings.append((s, int(c)))

# Call function and print result
print(choose_strings(N, strings))