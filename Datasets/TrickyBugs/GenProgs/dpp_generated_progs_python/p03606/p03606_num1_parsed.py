n = int(input())
seats = []
for _ in range(n):
    seats.extend(range(*map(int, input().split())))
print(len(set(seats)))