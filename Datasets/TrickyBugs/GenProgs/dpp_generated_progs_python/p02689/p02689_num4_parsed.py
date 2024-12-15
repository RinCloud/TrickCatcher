# Program

def count_good_observatories(N, M, H, roads):
    good_observatories = set(range(1, N+1))
    for a, b in roads:
        if H[a-1] <= H[b-1]:
            good_observatories.discard(a)
        if H[b-1] <= H[a-1]:
            good_observatories.discard(b)
    return len(good_observatories)

# Get input
N, M = map(int, input().split())
H = list(map(int, input().split()))
roads = [list(map(int, input().split())) for _ in range(M)]

# Print output
print(count_good_observatories(N, M, H, roads))