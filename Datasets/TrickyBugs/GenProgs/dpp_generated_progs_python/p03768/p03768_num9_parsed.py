# Plan:
1. Read the input values of N, M, Q.
2. Initialize a graph with N vertices.
3. Read the edges and add edges to the graph.
4. Initialize a color array with all elements as 0.
5. For each operation, find all vertices within distance di from vertex vi using Breadth First Search (BFS).
6. Change the color of those vertices to ci.
7. Print the color array after all operations.

# Program: