# Program

def solve(N, M, edges):
  global uf
  uf = UnionFind(N)
  
  for x, y, z in edges:
    uf.union(x-1, y-1)
    
  return uf.count()