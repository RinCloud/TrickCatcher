from collections import defaultdict

MOD = 998244353

def max_weight_independent_set(N, edges):
    x_edges, y_edges, z_edges = edges

    graph = build_graph(N, x_edges, y_edges, z_edges)
    independent_set_dp = calculate_independent_set_dp(graph, N)
    max_weight = calculate_max_weight(independent_set_dp, N)
    return max_weight

def build_graph(N, x_edges, y_edges, z_edges):
    graph = defaultdict(list)
    for x_u, x_v in x_edges:
        for w in range(1, N+1):
            for l in range(1, N+1):
                graph[(x_u, w, l)].append((x_v, w, l))
                graph[(x_v, w, l)].append((x_u, w, l))
    
    for y_u, y_v in y_edges:
        for w in range(1, N+1):
            for l in range(1, N+1):
                graph[(w, y_u, l)].append((w, y_v, l))
                graph[(w, y_v, l)].append((w, y_u, l))
    
    for z_u, z_v in z_edges:
        for w in range(1, N+1):
            for l in range(1, N+1):
                graph[(w, l, z_u)].append((w, l, z_v))
                graph[(w, l, z_v)].append((w, l, z_u))
                
    return graph

def calculate_independent_set_dp(graph, N):
    dp = [[0] * (N+1) for _ in range(N+1)]
    dp[0][0] = 1
    
    for i in range(1, N+1):
        dp[i][0] = dp[i-1][0] * 2
        dp[i][0] %= MOD
        
    for j in range(1, N+1):
        dp[0][j] = dp[0][j-1] * 2
        dp[0][j] %= MOD
        
    for i in range(1, N+1):
        for j in range(1, N+1):
            for k in range(1, N+1):
                for vertex in graph[(i, j, k)]:
                    x, y, z = vertex
                    dp[i][j] += dp[x-1][y] * dp[i][z-1]
                    dp[i][j] %= MOD
    
    return dp

def calculate_max_weight(independent_set_dp, N):
    max_weight = 0
    for i in range(N+1):
        for j in range(N+1):
            for k in range(N+1):
                weight = pow(10, 18 * (i+j+k), MOD)
                weight *= independent_set_dp[i][j] * independent_set_dp[j][k] * independent_set_dp[k][i]
                weight %= MOD
                max_weight += weight
                max_weight %= MOD
    
    return max_weight

if __name__ == "__main__":
    N = int(input())
    edges = []
    for _ in range(3):
        M = int(input())
        m_edges = []
        for _ in range(M):
            a, b = map(int, input().split())
            m_edges.append((a, b))
        edges.append(m_edges)
    
    result = max_weight_independent_set(N, edges)
    print(result)