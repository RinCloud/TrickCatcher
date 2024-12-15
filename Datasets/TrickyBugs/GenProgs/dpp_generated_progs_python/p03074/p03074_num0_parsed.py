'''
# Plan
- First, we count the consecutive number of people standing on hands in s. Store it in the array cnt.
- Then we can define an initial answer as the sum of the first K elements from cnt.
- We iterate through the subarray of cnt starting from idx = K until idx = N. On each iteration, we add the next element from cnt and subtract the previous element cnt[idx-K].
- Finally, we find the maximum value in the answer array and print it as the result.
'''


N, K = map(int, input().split())
S = input()

# Count the consecutive number of people standing on hands
cnt = []
current = 0
for i in range(N):
    if S[i] == '1':
        current += 1
    else:
        if current > 0:
            cnt.append(current)
        current = 0
if current > 0:
    cnt.append(current)

# Define the initial answer as the sum of the first K elements from cnt
answer = sum(cnt[:K])

# Find the maximum possible number of consecutive people standing on hands
for i in range(K, len(cnt)):
    answer = max(answer, answer - cnt[i-K] + cnt[i])

# Print the maximum possible number of consecutive people standing on hands
print(answer)
