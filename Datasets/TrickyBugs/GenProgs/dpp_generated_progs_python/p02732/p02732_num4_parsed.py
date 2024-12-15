def find_number_of_ways(N, balls):
    frequency_count = {}
    for ball in balls:
        if ball in frequency_count:
            frequency_count[ball] += 1
        else:
            frequency_count[ball] = 1

    answer = []
    for k in range(1, N + 1):
        count = 0
        if balls[k - 1] in frequency_count:
            count = frequency_count[balls[k - 1]] - 1
        answer.append(count)

    return answer


# Read input
N = int(input())
balls = list(map(int, input().split()))

# Solve problem
answer = find_number_of_ways(N, balls)

# Print output
for ans in answer:
    print(ans)