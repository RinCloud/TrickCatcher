def min_balls_to_rewrite(N, K, balls):
    count = {}
    for ball in balls:
        if ball in count:
            count[ball] += 1
        else:
            count[ball] = 1

    sorted_counts = sorted(count.values(), reverse=True)

    if len(sorted_counts) <= K:
        return 0
    else:
        return sum(sorted_counts[K:])