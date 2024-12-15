from math import log2

def calculate_score(A, B):
    return A * B

def calculate_smaller_scores(Q, queries):
    smaller_scores = []
    for i in range(Q):
        A, B = queries[i]
        score = calculate_score(A, B)

        smaller_count = 0
        if score == 1:
            smaller_count = 0
        elif score % 2 == 0:
            smaller_count = 1
        else:
            smaller_count = int(log2(score))

        smaller_scores.append(smaller_count)

    return smaller_scores

Q = int(input())
queries = []
for _ in range(Q):
    A, B = map(int, input().split())
    queries.append((A, B))

smaller_scores = calculate_smaller_scores(Q, queries)
for score in smaller_scores:
    print(score)