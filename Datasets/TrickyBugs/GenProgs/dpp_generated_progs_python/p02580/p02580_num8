import sys


def solve(h, w, m, targets):
    # count the number of targets in each row and column
    row_targets = [0] * h
    col_targets = [0] * w
    for target in targets:
        row_targets[target[0]-1] += 1
        col_targets[target[1]-1] += 1

    # find the row and column with the maximum number of targets
    max_row_targets = max(row_targets)
    max_col_targets = max(col_targets)

    # find the number of targets outside the row and column with the maximum number of targets
    outside_targets = m - max_row_targets - max_col_targets

    # add the maximum number of targets to the number of targets outside
    ans = max_row_targets + max_col_targets + outside_targets

    return ans


def main():
    # read input from Standard Input
    h, w, m = map(int, input().split())
    targets = []
    for _ in range(m):
        h_i, w_i = map(int, input().split())
        targets.append((h_i, w_i))

    # solve the problem
    ans = solve(h, w, m, targets)

    # print the answer
    print(ans)


main()