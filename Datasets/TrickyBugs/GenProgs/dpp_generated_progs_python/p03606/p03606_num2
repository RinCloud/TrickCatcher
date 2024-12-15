n = int(input())

total_seats = [0] * 100001

for _ in range(n):
    l, r = map(int, input().split())
    total_seats[l] += 1
    total_seats[r+1] -= 1

num_people = 0
current_people = 0
for i in range(1, 100001):
    current_people += total_seats[i]
    if current_people > 0:
        num_people += 1

print(num_people)