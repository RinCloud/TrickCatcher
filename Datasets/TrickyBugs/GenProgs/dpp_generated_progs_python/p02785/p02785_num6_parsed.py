N, K = map(int, input().split())
H = list(map(int, input().split()))

H.sort(reverse=True)

counter = sum(H[K:])
print(counter)
