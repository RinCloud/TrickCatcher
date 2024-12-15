from collections import Counter

N = int(input())
a = list(map(int, input().split()))

# Check if the count of each number is within the acceptable limit
count = Counter(a)
for i in range(1, N+1):
    if i not in count or count[i] < i:
        print("Impossible")
        break
else:
    print("Possible")