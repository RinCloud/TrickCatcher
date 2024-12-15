import bisect

# function to find the minimum distance to visit one shrine and one temple
def find_min_distance(A, B, Q, shrines, temples, queries):
    # storing the distances of shrines and temples in a single array
    points = shrines + temples
    
    # sorting the array
    points.sort()
    
    # list for storing the minimum distances for each query
    min_distances = []
    
    for query in queries:
        # finding the index of the starting point in the sorted array
        start_idx = bisect.bisect_left(points, query)
        
        # initializing the minimum distance to a large value
        min_dist = float('inf')
        
        # iterating through possible shrine-temple combinations
        for i in range(start_idx, len(points)):
            for j in range(A):
                # checking if the current point is a shrine
                if shrines[j] == points[i]:
                    for k in range(B):
                        # checking if the current point is a temple
                        if temples[k] == points[i]:
                            # calculating the distance and updating the minimum distance
                            dist = max(abs(query - shrines[j]), abs(query - temples[k]))
                            min_dist = min(min_dist, dist)
        # appending the minimum distance to the output list
        min_distances.append(min_dist)
    
    # returning the minimum distances for all queries
    return min_distances

# taking input from the user
A, B, Q = map(int, input().split())
shrines = [int(input()) for _ in range(A)]
temples = [int(input()) for _ in range(B)]
queries = [int(input()) for _ in range(Q)]

# calling the function to find the minimum distances
min_distances = find_min_distance(A, B, Q, shrines, temples, queries)

# printing the minimum distances for all queries
for distance in min_distances:
    print(distance)