# Function to find the shortest distance between two vertices in an undirected graph
def shortest_distance(graph, start, end):
    # Initialize a queue for BFS
    queue = [(start, 0)]
    
    # Initialize a set to keep track of visited vertices
    visited = set()
    visited.add(start)
    
    # Traverse the graph using BFS
    while queue:
        vertex, distance = queue.pop(0)
        
        # If we reach the end vertex, return the distance
        if vertex == end:
            return distance
        
        # Explore the neighboring vertices
        for neighbor in graph[vertex]:
            if neighbor not in visited:
                queue.append((neighbor, distance + 1))
                visited.add(neighbor)
    
    # If the end vertex is not reachable from the start vertex, return -1
    return -1


# Function to count the number of pairs of integers (i,j) such that the shortest distance between Vertex i and Vertex j in G is k
def count_pairs(N, X, Y):
    # Create an empty dictionary to represent the graph
    graph = {}
    
    # Add edges to the graph
    for i in range(1, N):
        graph[i] = [i + 1]
        graph[i + 1] = [i]
    graph[X].append(Y)
    graph[Y].append(X)
    
    # Initialize a list to store the count of pairs for each k
    pairs_count = []
    
    # Count the number of pairs for each k
    for k in range(1, N):
        count = 0
        # Traverse all possible pairs of integers (i, j)
        for i in range(1, N + 1):
            for j in range(i + 1, N + 1):
                # Find the shortest distance between Vertex i and Vertex j
                distance = shortest_distance(graph, i, j)
                # If the shortest distance is k, increment the count
                if distance == k:
                    count += 1
        # Append the count to the list
        pairs_count.append(count)
    
    # Return the list of counts
    return pairs_count


# Read the input values from standard input
N, X, Y = map(int, input().split())

# Call the count_pairs function to get the list of counts
result = count_pairs(N, X, Y)

# Print the counts
for count in result:
    print(count)