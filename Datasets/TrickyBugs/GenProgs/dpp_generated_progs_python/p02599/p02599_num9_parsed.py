N, Q = map(int, input().split())
balls = list(map(int, input().split()))

colors = set(balls)
answers = []

for _ in range(Q):
    left, right = map(int, input().split())
    sub_balls = balls[left-1:right]
    sub_colors = set(sub_balls)
    answers.append(len(sub_colors))

for answer in answers:
    print(answer)