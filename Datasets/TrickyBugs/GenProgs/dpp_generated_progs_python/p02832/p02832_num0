def satisfy_snuke_desire(N, bricks):
    numbers = set(bricks)
    if len(numbers) != N:
        return -1
    count = 0
    for i in range(N):
        if bricks[i] != i+1:
            count += 1
    return count

# Read input
N = int(input())
bricks = list(map(int, input().split()))

# Call the function and print the result
result = satisfy_snuke_desire(N, bricks)
print(result)