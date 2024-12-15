import sys

def solve(h, w, m, targets):
    rows = [0] * h
    cols = [0] * w

    for i in range(m):
        row, col = targets[i]
        rows[row - 1] += 1
        cols[col - 1] += 1

    max_targets = max(rows) + max(cols)

    max_count = 0
    for i in range(m):
        row, col = targets[i]
        if rows[row - 1] + cols[col - 1] == max_targets:
            max_count += 1

    return max_count


def main():
    h, w, m = map(int, input().split())

    targets = []
    for _ in range(m):
        row, col = map(int, input().split())
        targets.append((row, col))

    answer = solve(h, w, m, targets)
    print(answer)


if __name__ == "__main__":
    main()