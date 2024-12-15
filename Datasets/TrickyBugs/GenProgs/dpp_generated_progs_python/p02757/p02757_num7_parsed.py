N, P = map(int, input().split())
S = input()

count = 0

for i in range(N):
  num = int(S[i])
  if num % P == 0:
    count += i + 1

for i in range(N - 1):
  for j in range(i + 1, N):
    num = int(S[i:j+1])
    if num % P == 0:
      count += 1

print(count)