def count_triangle_combinations(N, lengths):
    count = 0
    for i in range(N):
        for j in range(i+1, N):
            for k in range(j+1, N):
                if lengths[i] != lengths[j] and lengths[j] != lengths[k] and lengths[k] != lengths[i]:
                    if lengths[i] + lengths[j] > lengths[k] and lengths[i] + lengths[k] > lengths[j] and lengths[j] + lengths[k] > lengths[i]:
                        count += 1
    return count


# Read input
N = int(input())
lengths = list(map(int, input().split()))

# Call the function and print the output
print(count_triangle_combinations(N, lengths))