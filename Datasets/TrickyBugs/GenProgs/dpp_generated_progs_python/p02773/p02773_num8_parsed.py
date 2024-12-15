def most_common_strings(N, S):
    # Count the occurrences of each string
    count = {}
    for s in S:
        count[s] = count.get(s, 0) + 1
    
    # Find the maximum count
    max_count = max(count.values())
    
    # Get all strings that have the maximum count
    result = []
    for s, c in count.items():
        if c == max_count:
            result.append(s)
    
    # Sort the strings in lexicographical order
    result.sort()
    
    # Print the result
    for s in result:
        print(s)

# Read input
N = int(input())
S = []
for _ in range(N):
    S.append(input())

# Call the function
most_common_strings(N, S)