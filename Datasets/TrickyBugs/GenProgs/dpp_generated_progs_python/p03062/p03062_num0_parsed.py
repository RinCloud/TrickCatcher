import sys

def max_sum(n, arr):
    sum_value = 0
    min_abs = sys.maxsize

    negative_count = 0
    for num in arr:
        sum_value += abs(num)
        if num < 0:
            negative_count += 1
            min_abs = min(min_abs, abs(num))

    if negative_count % 2 == 1:
        sum_value -= 2 * min_abs

    return sum_value

if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().split()))
    print(max_sum(n, arr))
