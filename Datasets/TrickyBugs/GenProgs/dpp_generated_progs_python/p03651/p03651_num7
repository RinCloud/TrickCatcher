import sys

def operation_possible(N, K, balls):
    max_value = max(balls)
    if max_value < K:
        return "IMPOSSIBLE"

    gcd = balls[0]
    for i in range(1, N):
        gcd = find_gcd(gcd, balls[i])

    if K % gcd == 0:
        return "POSSIBLE"
    else:
        return "IMPOSSIBLE"

def find_gcd(x, y):
    while(y):
        x, y = y, x % y
    return x

if __name__ == "__main__":
    input_list = sys.stdin.read().splitlines()
    N, K = map(int, input_list[0].split())
    balls = list(map(int, input_list[1].split()))

    result = operation_possible(N, K, balls)
    print(result)