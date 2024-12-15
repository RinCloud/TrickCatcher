import sys

def can_select_popular_items(N, M, votes):
    total_votes = sum(votes)
    threshold = total_votes / (4 * M)
    popular_items = [vote for vote in votes if vote >= threshold]
    
    if len(popular_items) >= M:
        return 'Yes'
    else:
        return 'No'

# read input from STDIN
N, M = map(int, input().split())
votes = list(map(int, input().split()))

# call function and print the result
result = can_select_popular_items(N, M, votes)
print(result)