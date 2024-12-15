def get_candies(N, arr):
    max_candies = 0
    min_candy_in_A = float('inf')

    for i in range(N):
        A, B = arr[i]
        max_candies += A
        if A > B:
            min_candy_in_A = min(min_candy_in_A, B)

    if min_candy_in_A == float('inf'):
        return 0
    else:
        return max_candies - min_candy_in_A

N = int(input())
arr = []
for _ in range(N):
    A, B = map(int, input().split())
    arr.append((A, B))
print(get_candies(N, arr))
