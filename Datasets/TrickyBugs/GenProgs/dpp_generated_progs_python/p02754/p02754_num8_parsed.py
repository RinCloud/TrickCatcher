N, A, B = map(int, input().split())
blue_balls = (N // (A + B)) * A + min(A, N % (A + B))
print(blue_balls)