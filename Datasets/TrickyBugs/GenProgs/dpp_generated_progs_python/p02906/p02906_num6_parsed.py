# Solution
First, we need to parse the input values for N, M, Q and the clues.
Next, we need to initialize a 2D array called `graph` to represent the graph with N vertices and M edges. We can initialize the array with all False values, indicating that there are no edges between any two vertices.
Then, for each clue, we need to update the graph based on the values of Ai, Bi, and Ci. 
If Ci is 0, we set `graph[Ai][Bi]` and `graph[Bi][Ai]` to True, indicating that there is a single path between Ai and Bi. 
If Ci is 1, we set `graph[Ai][Bi]` to True, indicating that there is an additional path between Ai and Bi.
After updating the graph, we can check if it matches Snuke's memory by performing a depth-first search (DFS) from vertex 0 to visit all vertices in the graph. If we are able to visit all vertices exactly once, then there exists a graph that matches Snuke's memory and we can print 'Yes'. Otherwise, we print 'No'.