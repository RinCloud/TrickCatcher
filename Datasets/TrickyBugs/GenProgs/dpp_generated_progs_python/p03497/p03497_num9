def min_balls_to_rewrite(n, k, balls):
    counts = {}
    for i in range(n):
        ball = balls[i]
        if ball in counts:
            counts[ball] += 1
        else:
            counts[ball] = 1

    if len(counts) <= k:
        return 0

    sorted_counts = sorted(counts.items(), key=lambda x: x[1])
    num_balls_to_rewrite = 0
    for i in range(len(sorted_counts)):
        if len(counts) <= k:
            break
        num_balls_to_rewrite += sorted_counts[i][1]
        counts.pop(sorted_counts[i][0])

    return num_balls_to_rewrite

n, k = map(int, input().split())
balls = list(map(int, input().split()))
print(min_balls_to_rewrite(n, k, balls))