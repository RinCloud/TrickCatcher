import sys

def solve(h, w, m, targets):
    row_counts = [0] * h
    col_counts = [0] * w

    for target in targets:
        hi, wi = target
        row_counts[hi - 1] += 1
        col_counts[wi - 1] += 1

    max_row = max(row_counts)
    max_col = max(col_counts)
    max_targets = max_row + max_col

    max_row_count = row_counts.count(max_row)
    max_col_count = col_counts.count(max_col)

    for target in targets:
        hi, wi = target
        count = row_counts[hi - 1] + col_counts[wi - 1]
        if count == max_targets and max_row_count > 1 and max_col_count > 1:
            print(max_targets - 1)
            return

    print(max_targets)

def main():
    h, w, m = map(int, input().split())
    targets = []

    for _ in range(m):
        hi, wi = map(int, input().split())
        targets.append((hi, wi))
    
    solve(h, w, m, targets)

if __name__ == '__main__':
    main()