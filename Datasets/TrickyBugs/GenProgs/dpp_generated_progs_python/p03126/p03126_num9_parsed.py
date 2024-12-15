N, M = map(int, input().split())
food_likes = [0] * M

for _ in range(N):
    K, *A = map(int, input().split())
    for i in A:
        food_likes[i-1] += 1

liked_by_all = 0
for count in food_likes:
    if count == N:
        liked_by_all += 1

print(liked_by_all)
