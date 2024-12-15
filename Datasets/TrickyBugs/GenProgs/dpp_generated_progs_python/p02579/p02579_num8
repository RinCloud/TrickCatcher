from collections import deque

def solve(H, W, C_h, C_w, D_h, D_w, S):
    inf = float('inf')
    
    def neighbors(h, w):
        d = [(0, 1), (1, 0), (0, -1), (-1, 0)]
        result = []
        
        for dh, dw in d:
            nh, nw = h + dh, w + dw
            
            if 0 <= nh < H and 0 <= nw < W and S[nh][nw] == '.':
                result.append((nh, nw))
            
        for dh in range(-2, 3):
            for dw in range(-2, 3):
                nh, nw = h + dh, w + dw
                
                if 0 <= nh < H and 0 <= nw < W and S[nh][nw] == '.':
                    result.append((nh, nw))
                    
        return result
    
    dist = [[inf] * W for _ in range(H)]
    dist[C_h - 1][C_w - 1] = 0
    queue = deque([(C_h - 1, C_w - 1)])
    
    while queue:
        h, w = queue.popleft()
        
        for nh, nw in neighbors(h, w):
            if dist[nh][nw] > dist[h][w]:
                dist[nh][nw] = dist[h][w]
                queue.appendleft((nh, nw))
                
        for dh in range(-2, 3):
            for dw in range(-2, 3):
                nh, nw = h + dh, w + dw
                
                if 0 <= nh < H and 0 <= nw < W and S[nh][nw] == '.':
                    if dist[nh][nw] > dist[h][w] + 1:
                        dist[nh][nw] = dist[h][w] + 1
                        queue.append((nh, nw))
                        
    if dist[D_h - 1][D_w - 1] == inf:
        return -1
    else:
        return dist[D_h - 1][D_w - 1]

H, W = map(int, input().split())
C_h, C_w = map(int, input().split())
D_h, D_w = map(int, input().split())
S = [input() for _ in range(H)]

result = solve(H, W, C_h, C_w, D_h, D_w, S)
print(result)