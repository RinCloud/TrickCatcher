# Plan
1. Read N, M, Q, and MOD from input
2. Initialize an empty adjacency list graph
3. Loop through range M, read A, B, and C from input
   1. Add edge (A, B, C) to graph
   2. Add edge (B, A, C) to graph
4. Loop through range Q, read S, T, and R from input
   1. Create a set to store visited vertices
   2. Create a queue and enqueue (S, 1)
   3. While the queue is not empty
      1. Dequeue a vertex u and its power p from the queue
      2. If u == T and p % MOD == R, print "YES" and break the loop
      3. Add u to visited vertices
      4. Loop through each vertex v connected to u in graph
         1. If v has not been visited
            1. Enqueue (v, 2 * p)
   4. If no path is found, print "NO"