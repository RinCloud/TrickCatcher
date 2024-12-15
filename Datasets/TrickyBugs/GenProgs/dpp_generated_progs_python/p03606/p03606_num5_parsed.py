N = int(input())
total_people = 0

for _ in range(N):
    l, r = map(int, input().split())
    total_people += r - l + 1

print(total_people)