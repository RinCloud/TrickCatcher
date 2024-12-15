def check_doublets_occurrence(N, rolls):
    for i in range(N-2):
        if rolls[i][0] == rolls[i][1] and rolls[i+1][0] == rolls[i+1][1] and rolls[i+2][0] == rolls[i+2][1]:
            return "Yes"
    return "No"

# Read input
N = int(input())
rolls = [list(map(int, input().split())) for _ in range(N)]

# Check doublets occurrence
result = check_doublets_occurrence(N, rolls)

# Print result
print(result)