N, Q = map(int, input().split())
S = input().strip()
queries = []

for _ in range(Q):
    l, r = map(int, input().split())
    queries.append((l, r))

# Preprocess the string to count occurrences of "AC" up to each position
ac_counts = [0] * N
for i in range(1, N):
    ac_counts[i] = ac_counts[i-1] + (S[i-1:i+1] == "AC")

# Answer each query
for l, r in queries:
    answer = ac_counts[r-1] - ac_counts[l-1]
    print(answer)