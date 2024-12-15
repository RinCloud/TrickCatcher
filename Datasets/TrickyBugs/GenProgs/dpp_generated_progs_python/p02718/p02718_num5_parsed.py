from typing import List, Tuple

def can_select_popular_items(N: int, M: int, votes: List[int]) -> str:
    total_votes = sum(votes)
    min_votes = total_votes / (4 * M)
    
    if all(vote >= min_votes for vote in votes[:M]):
        return "Yes"
    else:
        return "No"

# Read input from standard input
N, M = map(int, input().split())
votes = list(map(int, input().split()))

# Call the function and print the result
result = can_select_popular_items(N, M, votes)
print(result)