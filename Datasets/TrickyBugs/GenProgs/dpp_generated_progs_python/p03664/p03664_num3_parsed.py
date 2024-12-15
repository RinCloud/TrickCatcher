from typing import List, Tuple
from collections import defaultdict

def minimum_budget(N: int, M: int, edges: List[Tuple[int, int, int]]) -> int:
    adj_list = defaultdict(list)
    for a, b, c in edges:
        adj_list[a].append((b, c))
        adj_list[b].append((a, c))
    
    def dfs(v: int, mask: int) -> int:
        if v == N:
            return 0
        
        if dp[v][mask] != -1:
            return dp[v][mask]
        
        ans = float('inf')
        for u, c in adj_list[v]:
            if mask & (1 << (u-1)):
                continue
            
            ans = min(ans, c + dfs(u, mask | (1 << (u-1))))
        
        dp[v][mask] = ans
        return ans
    
    dp = [[-1] * (1 << N) for _ in range(N+1)]
    return dfs(1, 1)

def from_input_string(input_string: str) -> Tuple[int, int, List[Tuple[int, int, int]]]:
    lines = input_string.strip().split('\n')
    N, M = map(int, lines[0].strip().split())
    edges = []
    for line in lines[1:]:
        a, b, c = map(int, line.strip().split())
        edges.append((a, b, c))
    return N, M, edges
        
def to_input_string(inputs: Tuple[int, int, List[Tuple[int, int, int]]]) -> str:
    N, M, edges = inputs
    res = []
    res.append(f"{N} {M}")
    for a, b, c in edges:
        res.append(f"{a} {b} {c}")
    return '\n'.join(res)

def from_output_string(output_string: str) -> int:
    return int(output_string.strip())

def to_output_string(output: int) -> str:
    return str(output)