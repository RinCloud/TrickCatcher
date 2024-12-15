from sys import stdin, stdout

def can_select_popular_items(N, M, votes):
    total_votes = sum(votes)
    threshold = total_votes / (4 * M)
    
    max_votes = max(votes)
    if max_votes >= threshold:
        selected_items = 1
    else:
        selected_items = 0
    
    for i in range(N):
        if votes[i] != max_votes and votes[i] >= threshold:
            selected_items += 1
    
    if selected_items >= M:
        return 'Yes'
    else:
        return 'No'

# Read input
N, M = map(int, stdin.readline().split())
votes = list(map(int, stdin.readline().split()))

# Calculate result
result = can_select_popular_items(N, M, votes)

# Print result
stdout.write(result)