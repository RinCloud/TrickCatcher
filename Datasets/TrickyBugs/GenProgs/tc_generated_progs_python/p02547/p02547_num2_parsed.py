def check_triplets(N, rolls):
    for i in range(N - 2):
        if rolls[i][0] == rolls[i+1][0] == rolls[i+2][0] and rolls[i][1] == rolls[i+1][1] == rolls[i+2][1]:
            return 'Yes'
    return 'No'

N = int(input())
rolls = [list(map(int, input().split())) for _ in range(N)]

result = check_triplets(N, rolls)
print(result)
