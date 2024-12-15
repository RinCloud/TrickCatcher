def compute_scores(Q, queries):
    results = []
    for i in range(Q):
        A, B = queries[i]
        score = (A-1)*(B-1) + 1
        results.append(score)
    return results

def main():
    Q = int(input())
    queries = []
    for _ in range(Q):
        A, B = map(int, input().split())
        queries.append((A, B))
    
    scores = compute_scores(Q, queries)
    for score in scores:
        print(score)

if __name__ == "__main__":
    main()
