import sys

MOD = 998244353

def subset_sums(arr):
    n = len(arr)
    total = 0
    for i in range(1, n + 1):
        total += sum(arr[j] for j in range(n - i + 1))
    return total % MOD

def solve(points):
    x_coords = sorted(set(x for x, _ in points))
    y_coords = sorted(set(y for _, y in points))
    
    x_indices = {x: i for i, x in enumerate(x_coords)}
    y_indices = {y: i for i, y in enumerate(y_coords)}
    
    counts = [0] * (len(x_coords) - 1)
    for x, y in points:
        counts[x_indices[x]] += 1
    
    prefix_sums = [0] * len(counts)
    prefix_sums[0] = counts[0]
    for i in range(1, len(counts)):
        prefix_sums[i] = prefix_sums[i - 1] + counts[i]
    
    sum_ = 0
    for i in range(len(counts) - 1):
        sum_ += (
            prefix_sums[i] * (x_coords[i + 1] - x_coords[i]) * len(y_coords)
        ) % MOD
    
    sum_ += (
        prefix_sums[-1] * (x_coords[-1] - x_coords[-2] + 1) * len(y_coords)
    ) % MOD
    
    sum_ %= MOD
    
    counts = [0] * (len(y_coords) - 1)
    for x, y in points:
        counts[y_indices[y]] += 1
    
    prefix_sums = [0] * len(counts)
    prefix_sums[0] = counts[0]
    for i in range(1, len(counts)):
        prefix_sums[i] = prefix_sums[i - 1] + counts[i]
    
    for i in range(len(counts) - 1):
        sum_ += (
            prefix_sums[i] * (y_coords[i + 1] - y_coords[i])
        ) % MOD
    
    sum_ += (
        prefix_sums[-1] * (y_coords[-1] - y_coords[-2] + 1)
    ) % MOD
    
    sum_ %= MOD
    
    return (sum_ + 1 + subset_sums(counts) + subset_sums(x_coords) + subset_sums(y_coords)) % MOD

def main():
    N = int(input())
    points = [tuple(map(int, line.split())) for line in sys.stdin]
    print(solve(points))

if __name__ == '__main__':
    main()