import math

def can_cut(logs, max_length, num_cuts):
    cuts_needed = 0
    for log in logs:
        cuts_needed += math.ceil(log / max_length) - 1
    return cuts_needed <= num_cuts

def find_shortest_length(logs, num_cuts):
    left = 1
    right = max(logs)
    while left < right:
        mid = (left + right) // 2
        if can_cut(logs, mid, num_cuts):
            right = mid
        else:
            left = mid + 1
    return right

def main():
    n, k = map(int, input().split())
    logs = list(map(int, input().split()))
    result = find_shortest_length(logs, k)
    print(result)

if __name__ == '__main__':
    main()
