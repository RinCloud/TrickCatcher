import sys
import math

def can_select_popular_items(N, M, votes):
    sorted_votes = sorted(votes, reverse=True)
    total_votes = sum(sorted_votes)
    minimum_votes_required = math.ceil(total_votes / (4 * M))
    max_vote_count = sorted_votes[M - 1]
    
    if max_vote_count >= minimum_votes_required:
        return "Yes"
    else:
        return "No"

if __name__ == "__main__":
    N, M = map(int, input().split())
    votes = list(map(int, input().split()))
    result = can_select_popular_items(N, M, votes)
    print(result)