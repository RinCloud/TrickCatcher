def min_bricks_to_break(n: int, A: List[int]) -> int:
    c=n+2
    for i in range(n):
        if A[i]==1:
            c=2
        elif A[i]==c:
            c+=1
    return n-c+1

n = int(input())
A = list(map(int, input().split()))
print(min_bricks_to_break(n, A))
