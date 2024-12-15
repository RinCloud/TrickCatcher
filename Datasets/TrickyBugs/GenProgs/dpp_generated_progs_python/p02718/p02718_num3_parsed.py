from typing import List

def can_select_popular_items(N: int, M: int, A: List[int]) -> str:
    A.sort(reverse=True)
    threshold = sum(A) // (4 * M)
    
    if A[M-1] >= threshold:
        return "Yes"
    else:
        return "No"

if __name__ == "__main__":
    N, M = map(int, input().split())
    A = list(map(int, input().split()))
    
    result = can_select_popular_items(N, M, A)
    print(result)