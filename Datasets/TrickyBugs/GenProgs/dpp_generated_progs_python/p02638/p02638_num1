import itertools

def count_directed_graphs(N, K, P):
    def is_valid_graph(graph):
        for a, b, c, d in itertools.combinations(range(N), 4):
            if all((graph[a][b], graph[b][c], graph[c][a], graph[a][d], graph[b][d], graph[c][d])): 
                return False
        return True

    count = 0
    for graph in itertools.permutations(itertools.product([0, 1], repeat=N), N):
        if all(sum(graph[i][j] for i in range(N)) <= K for j in range(N)) and is_valid_graph(graph):
            count += 1

    return count % P

N, K, P = map(int, input().split())
print(count_directed_graphs(N, K, P))