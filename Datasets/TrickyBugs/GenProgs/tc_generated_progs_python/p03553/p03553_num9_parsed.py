N = int(input())
a0 = list(map(int, input().split()))

def smash_gems(a, x):
    for i in range(1, N//x + 1):
        a[(i * x) - 1] = 0 if a[(i * x) - 1] < 0 else a[(i * x) - 1]
    return a

max_earned_money = 0

for i in range(1, N+1):
    a = a0.copy()
    a = smash_gems(a, i)
    earned_money = sum(a)
    if earned_money > max_earned_money:
        max_earned_money = earned_money

print(max_earned_money)
