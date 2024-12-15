N, M = map(int, input().split())

correct = [0] * N
penalties = [0] * N

for _ in range(M):
    p, s = input().split()
    p = int(p) - 1
    if s == 'AC':
        correct[p] = 1
    else:
        if correct[p] == 0:
            penalties[p] += 1

num_correct = sum(correct)
num_penalties = sum(correct[i] * penalties[i] for i in range(N))

print(num_correct, num_penalties)