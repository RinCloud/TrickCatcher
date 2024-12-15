from typing import List

def can_select_popular_items(N: int, M: int, votes: List[int]) -> str:
    total_votes = sum(votes)
    threshold = total_votes / (4 * M)
    popular_items = [vote for vote in votes if vote >= threshold]
    
    if len(popular_items) >= M:
        return 'Yes'
    else:
        return 'No'


if __name__ == '__main__':
    N, M = map(int, input().split())
    votes = list(map(int, input().split()))
    result = can_select_popular_items(N, M, votes)
    print(result)