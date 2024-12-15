# My plan for solving this problem is to iterate through the elements of the sequence and check if it is possible to construct a tree satisfying the given conditions.
# We will start from the first vertex and move to the right. For each vertex, we will keep track of the maximum distance from it to any vertex.
# At each step, we will check if the maximum distance from the current vertex is outside the possible range of distances for the remaining vertices.
# If it is outside the range, we stop and print "Impossible".
# Otherwise, if we reach the last vertex without any issues, we print "Possible".

N = int(input())

a = list(map(int, input().split()))

max_distance = a[0]

for i in range(1, N):
    max_distance -= 1
    max_distance = min(max_distance, a[i])
    if max_distance < 0:
        print("Impossible")
        exit(0)

print("Possible")