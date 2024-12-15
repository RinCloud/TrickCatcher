from collections import defaultdict

MOD = 998244353

def calc_weight(i, j, k):
    return pow(10, 18 * (i + j + k), MOD)

def main():
    N = int(input())
    M1 = int(input())
    edges1 = [tuple(map(int, input().split())) for _ in range(M1)]
    M2 = int(input())
    edges2 = [tuple(map(int, input().split())) for _ in range(M2)]
    M3 = int(input())
    edges3 = [tuple(map(int, input().split())) for _ in range(M3)]
    
    # Create graph X
    graph_x = defaultdict(list)
    for u, v in edges1:
        graph_x[u].append(v)
        graph_x[v].append(u)
    
    # Create graph Y
    graph_y = defaultdict(list)
    for u, v in edges2:
        graph_y[u].append(v)
        graph_y[v].append(u)
    
    # Create graph Z
    graph_z = defaultdict(list)
    for u, v in edges3:
        graph_z[u].append(v)
        graph_z[v].append(u)
    
    # Create graph W
    graph_w = defaultdict(list)
    for u in range(1, N + 1):
        for v in range(1, N + 1):
            for w in range(1, N + 1):
                if u in graph_x and v in graph_y and w in graph_z:
                    if not any(v in graph_y[u_prime] for u_prime in graph_x[u]) and not any(w in graph_z[u_prime] for u_prime in graph_x[u]) and not any(w in graph_z[v_prime] for v_prime in graph_y[v]):
                        graph_w[(u, v, w)] = []

    # Add edges to graph W
    for u, v in edges1:
        for w in range(1, N + 1):
            if (u, v, w) in graph_w:
                for l in range(1, N + 1):
                    if (u, v, l) in graph_w:
                        graph_w[(u, v, w)].append((u, v, l))
    
    for u, v in edges2:
        for w in range(1, N + 1):
            if (w, u, v) in graph_w:
                for l in range(1, N + 1):
                    if (w, v, l) in graph_w:
                        graph_w[(w, u, v)].append((w, v, l))
    
    for u, v in edges3:
        for w in range(1, N + 1):
            if (w, u, v) in graph_w:
                for l in range(1, N + 1):
                    if (w, u, l) in graph_w:
                        graph_w[(w, u, v)].append((w, u, l))
    
    # Perform dynamic programming to find the maximum weight of independent set
    dp = {}
    def dfs(u, v, w):
        if (u, v, w) not in dp:
            max_weight = calc_weight(u, v, w)
            for u_prime, v_prime, w_prime in graph_w[(u, v, w)]:
                max_weight = max(max_weight, dfs(u_prime, v_prime, w_prime) + calc_weight(u, v, w))
            dp[(u, v, w)] = max_weight
        return dp[(u, v, w)]

    max_weight = 0
    for u in range(1, N + 1):
        for v in range(1, N + 1):
            for w in range(1, N + 1):
                if (u, v, w) in graph_w:
                    max_weight = max(max_weight, dfs(u, v, w))
    
    print(max_weight % MOD)

if __name__ == '__main__':
    main()